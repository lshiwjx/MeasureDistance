#include "mylabel.h"

MyLabel::MyLabel(QWidget *parent):
    QLabel(parent),
	tracker(true,false,true,true)
{
	connect(&mTimer, SIGNAL(timeout()), this, SLOT(updateFrame()));
}


void MyLabel::mousePressEvent(QMouseEvent *event)
{
    this->mTopLeft = event->pos();
}

void MyLabel::mouseReleaseEvent(QMouseEvent *event)
{
	//this->inited = false;
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

		/*if(tracker = Tracker::create("KCF"))
			if (tracker->init(frame, rect))
			{
				//this->mTimer.start(30);
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
		}*/
		tracker.init(rect, frame);
		this->mTimer.start(10);
		//this->inited = true;
    }

}

void MyLabel::updateFrame()
{
	rect = tracker.update(frame);
	double pixNum = rect.y + rect.height - 288;
	double dist = 749800 * 1 / pixNum - 722.1;
	if (pixNum > 0)
	{ 
		emit setDistance(dist);	
	}
	else
		emit setDistance(0);
	//this->mTimer.stop();
	/*if (this->inited)
		if (tracker.update(frame, rect))
			isRectFount = true;
		else 
		{
			isRectFount = false;
			QMessageBox msbox;
			msbox.setText("frame update false, obj may loss");
			msbox.exec();
		}*/
	//this->mTimer.start();
	//double y = (rect.x + rect.width / 2 - 352);
	//double x = (576 - rect.y - rect.height);
	//double radio =  y/x ;
	//int angle = atan(radio) * 180 / 3.1415926;
	int laserAngle = -((rect.x + rect.width / 2) / 704 * 50 - 25);
	emit requestDistance(laserAngle);

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
void MyLabel::setmPixmap(QPixmap &pixmap)
{
    mPixmap = pixmap;
	mImage = mPixmap.toImage();
	//cv::Mat kernel(3, 3, CV_32F, Scalar(-1));
	//kernel.at<float>(1, 1) = 8.9;
	if(!mImage.isNull())
	{
		frame = QImage2cvMat(mImage);
    	//namedWindow("beforeFilter");
    	//imshow("beforeFilter", frame);
		cv::GaussianBlur(frame, frame, cv::Size(5, 5), 0, 0, 4);
		//cv::filter2D(frame, frame, frame.depth(), kernel);
		//cv::medianBlur(frame, frame, 3);
		//cv::bilateralFilter(frame, frame, 3, 50, 50, 4);
	}
	    
}
void MyLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);
	QPainter painter(this);
	painter.setPen(QPen(Qt::red, 2));

	//isRectFount = false;
	painter.drawRect(rect.x, rect.y, rect.width, rect.height);

	/*if (this->inited)
		if (tracker->update(frame, rect))
			isRectFount = true;

	if(isRectFount)
		painter.drawRect(rect.x, rect.y, rect.width, rect.height);
	else
		painter.drawRect(0, 0, 0, 0);*/
	/*if (this->inited)
	{
		rect = tracker.update(frame);
		painter.drawRect(rect.x, rect.y, rect.width, rect.height);
	}*/

}



