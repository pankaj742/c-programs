#include "circle1.h"

#include <QPainter>

circle1::circle1(QWidget*parent):QWidget(parent)

{

}

void circle1::paintEvent(QPaintEvent *e)

{

Q_UNUSED(e);

QPainter qp(this);

drawBreCircle(&qp);

drawDdaLine(&qp);

}

void circle1:: drawBreCircle(QPainter *qp)

{

QPen p(Qt::red,2,Qt::SolidLine);

qp->setPen(p);

int d=0,r[2]={160,80},x,y,i;

for(i=0;i<2;i++)

{

x=0;y=r[i];

do

{

qp->drawPoint(x+200,y+250);

qp->drawPoint(y+200,x+250);

qp->drawPoint(y+200,-x+250);

qp->drawPoint(x+200,-y+250);

qp->drawPoint(-x+200,-y+250);

qp->drawPoint(-y+200,-x+250);

qp->drawPoint(-y+200,x+250);

qp->drawPoint(-x+200,y+250);

if(d<0)

{

d=d+(4*x)+6;

}

else

{

d=d+4*(x-y)+10;

y=y-1;

}

x=x+1;

}while(x<y);

}

}

void circle1::drawDdaLine(QPainter *qp)

{

QPen p(Qt::red,2,Qt::DashLine);

qp->setPen(p);

int j,i;

float x1,y1,x2,y2;

float dx,dy,length,xincr,yincr,x,y;

int xpt[4]={200,60,340,200};

int ypt[4]={90,330,330,90};

for(j=0;j<3;j++)

{

x1=xpt[j];y1=ypt[j];

x2=xpt[j+1];y2=ypt[j+1];

dx=abs(x2-x1);

dy=abs(y2-y1);

if(dx>=dy)

{

length=dx;

}

else {

length=dy;

}

xincr=(x2-x1)/length;

yincr=(y2-y1)/length;

x=x1+0.5;

y=y1+0.5;

qp->drawPoint((int)x,(int)y);

qp->drawText((int)x,(int)y,QString::number((int)x));

qp->drawText((int)x+40,(int)y,QString::number((int)y));

i=1;

while(i<=length)

{

x=x+xincr;

y=y+yincr;

qp->drawPoint((int)x,(int)y);

i=i+1;



}

}

}
