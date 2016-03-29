#include "mylabel.h"

cv::Mat QImage2cvMat(QImage image);


MyLabel::MyLabel(QWidget *parent):
    QLabel(parent)
{
	connect(&mTimer, SIGNAL(timeout()), this, SLOT(updateFrame()));
}


void MyLabel::mousePressEvent(QMouseEvent *event)
{
    this->mTopLeft = event->pos();
}

void MyLabel::mouseReleaseEvent(QMouseEvent *event)
{
	this->inited = false;
	mTimer.stop();
    this->mBottomRight = event->pos();

	float x = 0, y = 0, width = 0, height = 0;
	x = mBottomRight.x() < mTopLeft.x() ? mBottomRight.x() : mTopLeft.x();
	y = mBottomRight.y() < mTopLeft.y() ? mBottomRight.y() : mTopLeft.y();
	width = abs(mBottomRight.x() - mTopLeft.x());
	height = abs(mTopLeft.y() - mBottomRight.y());

    if(width>20 && height>20)
    {
        mRect.setTopLeft(mTopLeft);
        mRect.setBottomRight(mBottomRight);

        rect = cv::Rect(x, y, width, height);

		if (!mImage.isNull()) {
			frame = QImage2cvMat(mImage);
		}

		if(tracker = Tracker::create("KCF"))
			if (tracker->init(frame, rect))
			{
				this->mTimer.start(20);
				this->inited = true;
			}
			else
			{
				QMessageBox msbox;
				msbox.setText("tracker init false");
				msbox.exec();
			}
		else
		{
			QMessageBox msbox;
			msbox.setText("algorithm create false");
			msbox.exec();
		}
    }

}



void MyLabel::updateFrame()
{
	if (!mImage.isNull()) {
		frame = QImage2cvMat(mImage);
		//cvtColor(frame, frame, CV_BGR2GRAY);
		//imshow("image", frame);
	}
	//this->mTimer.stop();
	isRectFount = false;
	if (this->inited)
		if (tracker->update(frame, rect))
			isRectFount = true;
	//this->mTimer.start();
}

/*void MyLabel::boundingRect(QRectF rect, bool show)
{
    mRect = rect;
}*/




void MyLabel::setmPixmap(QPixmap &pixmap)
{
    mPixmap = pixmap;
	mImage = mPixmap.toImage();

}
void MyLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);
	QPainter painter(this);
	painter.setPen(QPen(Qt::red, 2));

	//isRectFount = false;

	/*if (this->inited) 
	{
		if (tracker->update(frame, rect))
			isRectFount = true;
	}*/

	if(isRectFount)
		painter.drawRect(rect.x, rect.y, rect.width, rect.height);
	else
		painter.drawRect(0, 0, 0, 0);
}



cv::Mat QImage2cvMat(QImage image)
{
	cv::Mat mat;
	//qDebug() << image.format();
	switch (image.format())
	{
	case QImage::Format_ARGB32:
	case QImage::Format_RGB32:
	case QImage::Format_ARGB32_Premultiplied:
		mat = cv::Mat(image.height(), image.width(), CV_8UC4, (void*)image.constBits(), image.bytesPerLine());
		cvtColor(mat, mat, CV_RGBA2RGB);
		break;
	case QImage::Format_RGB888:
		mat = cv::Mat(image.height(), image.width(), CV_8UC3, (void*)image.constBits(), image.bytesPerLine());
		cv::cvtColor(mat, mat, CV_BGR2RGB);
		break;
	case QImage::Format_Indexed8:
		mat = cv::Mat(image.height(), image.width(), CV_8UC1, (void*)image.constBits(), image.bytesPerLine());
		break;
	}
	return mat;
}