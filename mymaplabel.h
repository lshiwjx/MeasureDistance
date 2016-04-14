#ifndef MYMAPLABEL_H
#define MYMAPLABEL_H

#include <QLabel>
#include <qpainter.h>

class MyMapLabel : public QLabel
{
	Q_OBJECT

public:
	MyMapLabel(QWidget *parent);
	~MyMapLabel();
	void paintEvent(QPaintEvent *event);
	QPoint mLaserDitance[181];
private:
	
};

#endif // MYMAPLABEL_H
