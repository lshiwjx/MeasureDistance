#include "mymaplabel.h"

MyMapLabel::MyMapLabel(QWidget *parent)
	: QLabel(parent)
{

}

MyMapLabel::~MyMapLabel()
{

}

void MyMapLabel::paintEvent(QPaintEvent * event)
{
	QLabel::paintEvent(event);

	QPainter painter(this);
	painter.setPen(QPen(Qt::green, 4));
	for (int i = 0; i < 362; i++)
	{
		painter.drawPoint(i,this->mLaserDitance[i/2]);
	}
}
