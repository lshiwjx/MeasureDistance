#ifndef MYLABEL_H
#define MYLABEL_H
#include <QMouseEvent>
#include <QLabel>
#include <QRect>
#include <QPainter>
#include <QTimer>
#include <qmessagebox.h>
#include <opencv2/core/utility.hpp> 
#include <opencv2/tracking/tracker.hpp>
#include <opencv2/highgui.hpp>
#include "src\kcftracker.hpp"

//#include "compressiveTracking/CompressiveTracker.h"
using namespace cv;
class MyLabel : public QLabel
{
    Q_OBJECT
public:
    MyLabel(QWidget *parent = 0);

    void paintEvent(QPaintEvent *event);
    void setmPixmap(QPixmap &pixmap);
signals:
	void setDistance(float distance);
	void requestDistance(int angle);
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
public slots:
    //void boundingRect(QRectF rect, bool show = true);
	void updateFrame();
private:
    QRectF mRect;
    QPoint mTopLeft;
    QPoint mBottomRight;
    QPixmap mPixmap;
//    int mDistance;
//    IplImage* mpImage;
    QImage mImage;
//    CompressiveTracker ct;
    cv::Rect2d rect = cv::Rect(0,0,0,0);
    cv::Mat frame;

	KCFTracker tracker;
	//Ptr<Tracker> tracker = Tracker::create("KCF");
    cv::Mat grayImage;
    bool inited = false;
	bool isRectFount = false;
	QTimer mTimer;
};

#endif // MYLABEL_H
