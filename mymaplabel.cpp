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
	painter.setPen(QPen(Qt::black, 4));
	for (int i = 0; i < 362; i++)
	{
		painter.drawPoint(this->mLaserDitance[i/2]);
	}
}
