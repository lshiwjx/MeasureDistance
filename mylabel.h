#ifndef MYLABEL_H
#define MYLABEL_H
#include <QMouseEvent>
#include <QLabel>
#include <QRect>
#include <QPainter>
#include "opencv2/opencv.hpp"
//#include "compressiveTracking/CompressiveTracker.h"
#include "Detector.h"

class MyLabel : public QLabel
{
    Q_OBJECT
public:
    MyLabel(QWidget *parent = 0);

    void paintEvent(QPaintEvent *event);
    void setmPixmap(QPixmap &pixmap);

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
public slots:
    void boundingRect(QRectF rect, bool show = true);
private:
    QRectF mRect;
    QPoint mTopLeft;
    QPoint mBottomRight;
    QPixmap mPixmap;
//    int mDistance;
//    IplImage* mpImage;
    QImage mImage;
//    CompressiveTracker ct;
//    cv::Rect rect = cv::Rect(0,0,0,0);
//    cv::Mat frame;

//    Detector m_tld;

//    cv::Mat grayImage;
//    bool inited = false;
};

#endif // MYLABEL_H
