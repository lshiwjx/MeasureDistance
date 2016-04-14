#include "myplotlabel.h"

MyPlotLabel::MyPlotLabel(QWidget *parent)
	: QLabel(parent)
{
	for (int i = 0; i < 400; i++)
	{
		mRealdistQueue.enqueue(0);
		mVersiondistQueue.enqueue(0);
	}
}

MyPlotLabel::~MyPlotLabel()
{

}

void MyPlotLabel::paintEvent(QPaintEvent * event)
{
	QLabel::paintEvent(event);
	QPainter painter(this);
	int dist;
	painter.setPen(QPen(Qt::red, 2));
	for (int i = 0; i < 400; i++)
	{
		dist = 120 - mRealdistQueue.at(i) / 100;
		if (dist > 130)
			painter.drawPoint(QPoint(i, 130));
		else if (dist < 0)
			painter.drawPoint(QPoint(i, 0));
		else
			painter.drawPoint(QPoint(i, dist));
	}
	painter.setPen(QPen(Qt::blue, 2));
	for (int i = 0; i < 400; i++)
	{
		dist = 120 - mVersiondistQueue.at(i) / 100;
		if (dist > 130)
			painter.drawPoint(QPoint(i, 130));
		else if (dist < 0)
			painter.drawPoint(QPoint(i, 0));
		else
			painter.drawPoint(QPoint(i, dist));
	}
	
}
