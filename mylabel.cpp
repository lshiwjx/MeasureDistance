#include "mylabel.h"

MyLabel::MyLabel(QWidget *parent):
    QLabel(parent)
{
//    this->mImage = mPixmap.toImage();
//    frame = cv::Mat(mImage.height(), mImage.width(), CV_8UC3, const_cast<uchar*>(mImage.bits()), mImage.bytesPerLine());
//    connect(&m_tld, SIGNAL(boundingRect(QRectF)), this, SLOT(boundingRect(QRectF)));
}


void MyLabel::mousePressEvent(QMouseEvent *event)
{
    this->mTopLeft = event->pos();
}

void MyLabel::mouseReleaseEvent(QMouseEvent *event)
{
    this->mBottomRight = event->pos();
    if(abs( (mBottomRight.x() - mTopLeft.x())*(mTopLeft.y()-mBottomRight.y()) ) > 400)
    {
        mRect.setTopLeft(mTopLeft);
        mRect.setBottomRight(mBottomRight);
//        rect = cv::Rect(mRect.topLeft().x(),mRect.topLeft().y(),mRect.width(),mRect.height());
//        cv::cvtColor(frame, grayImage, CV_RGB2GRAY);
//        ct.init(grayImage,rect);
//        this->inited = true;
//        if (m_tld.init(*mpImage, mRect))
//            m_tld.start();
    }

}

void MyLabel::boundingRect(QRectF rect, bool show)
{
    mRect = rect;
}


void MyLabel::setmPixmap(QPixmap &pixmap)
{
    mPixmap = pixmap;
}
void MyLabel::paintEvent(QPaintEvent *event)
{
    QLabel::paintEvent(event);
    QPainter painter(this);
    painter.setPen(QPen(Qt::red,2));
//    if(inited)
//    {
//        cv::cvtColor(frame, grayImage, CV_RGB2GRAY);
//        ct.processFrame(grayImage, rect);
//    }
//    printf("%d",rect.x);
//    m_tld.processFrame(mpImage);
    painter.drawRect(mRect.topLeft().x(),mRect.topLeft().y(),mRect.width(),mRect.height());
}



