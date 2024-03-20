#ifndef CIRCLE1_H

#define CIRCLE1_H

#include <QWidget>

class circle1 : public QWidget

{

Q_OBJECT

public:

circle1(QWidget *parent = 0);

~circle1();

void paintEvent(QPaintEvent *);

void drawBreCircle(QPainter *qp);

void drawDdaLine(QPainter *qp);

};

#endif // CIRCLE1_H

