#ifndef TRANSFORMATION1_H

#define TRANSFORMATION1_H

#include <QWidget>

class Transformation1 : public QWidget

{

Q_OBJECT

public:

Transformation1(QWidget *parent = 0);

void paintEvent(QPaintEvent *e);

void trans(QPainter *qp);

};



#endif // TRANSFORMATION1_H
