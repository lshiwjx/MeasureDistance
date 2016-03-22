#include "mylabel.h"

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
    if(abs( (mBottomRight.x() - mTopLeft.x())*(mTopLeft.y() - mBottomRight.y()) ) > 400)
    {
        mRect.setTopLeft(mTopLeft);
        mRect.setBottomRight(mBottomRight);
        rect = cv::Rect(mRect.topLeft().x(),mRect.topLeft().y(),mRect.width(),mRect.height());

		if(tracker = Tracker::create("KCF"))
			if (tracker->init(frame, rect))
			{
				this->mTimer.start(30);
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
	this->mTimer.stop();
	if (this->inited)
		if (tracker->update(frame, rect))
			isRectFount = true;
		else 
		{
			isRectFount = false;
			QMessageBox msbox;
			msbox.setText("frame update false, obj may loss");
			msbox.exec();
		}
	this->mTimer.start();
}

void MyLabel::boundingRect(QRectF rect, bool show)
{
    mRect = rect;
}


void MyLabel::setmPixmap(QPixmap &pixmap)
{
    mPixmap = pixmap;
	mImage = mPixmap.toImage();
	frame = cv::Mat(mImage.height(), mImage.width(), CV_8UC3, const_cast<uchar*>(mImage.bits()), mImage.bytesPerLine());
}
void MyLabel::paintEvent(QPaintEvent *event)
{
	QLabel::paintEvent(event);
	QPainter painter(this);
	painter.setPen(QPen(Qt::red, 2));
	if(isRectFount)
		painter.drawRect(rect.x, rect.y, rect.width, rect.height);
	else
		painter.drawRect(0, 0, 0, 0);
}



