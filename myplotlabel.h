#ifndef MYPLOTLABEL_H
#define MYPLOTLABEL_H

#include <QLabel>
#include <qqueue.h>
#include <qpainter.h>

class MyPlotLabel : public QLabel
{
	Q_OBJECT

public:
	MyPlotLabel(QWidget *parent);
	~MyPlotLabel();
	void paintEvent(QPaintEvent *event);
	QQueue<int> mRealdistQueue;
	QQueue<int> mVersiondistQueue;
private:

};

#endif // MYPLOTLABEL_H
