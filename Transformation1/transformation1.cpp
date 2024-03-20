#include "transformation1.h"

#include<QPainter>

Transformation1::Transformation1(QWidget *parent)

: QWidget(parent)

{

}

void Transformation1::paintEvent(QPaintEvent* e)

{

QPainter qp(this);

trans(&qp);

}

void Transformation1::trans(QPainter *qp)

{

QPen pen(Qt::black,2,Qt::SolidLine);

qp->setPen(pen);

qp->drawLine(100,300,900,300);

qp->drawLine(550,50,550,600);

qp->drawLine(550,300,550+200,300-200);

QPoint orig(550,300);

qp->drawPoint(100+550,300-150);

int ref[2][2]={{-1,0},{0,1}}; //ref about y axis

int res[1][2]={0};

int pt[1][2]={{100,150}};

for(int i=0;i<2;i++)

{

for(int j=0;j<2;j++)

{

for(int k=0;k<2;k++)

{

res[i][j]+=pt[i][k]*ref[k][j];

}

}

}

qp->drawPoint(res[0][0]+550,300-res[0][1]);

qp->drawText(res[0][0]+550,300-res[0][1],"Reflection about Y-axis");

int resrefx[1][2]={0};

int refx[2][2]={{1,0},{0,-1}}; //ref about x axis

for(int i=0;i<2;i++)

{

for(int j=0;j<2;j++)

{

for(int k=0;k<2;k++)

{

resrefx[i][j]+=pt[i][k]*refx[k][j];

}

}

}

qp->drawPoint(resrefx[0][0]+550,300-resrefx[0][1]);

qp->drawText(resrefx[0][0]+550,300-resrefx[0][1],"Reflection about X-axis");



int resreforig[1][2]={0};

int reforig[2][2]={{-1,0},{0,-1}}; //ref about y axis

for(int i=0;i<2;i++)

{

for(int j=0;j<2;j++)

{

for(int k=0;k<2;k++)

{

resreforig[i][j]+=pt[i][k]*reforig[k][j];

}

}

}

qp->drawPoint(resreforig[0][0]+550,300-resreforig[0][1]);

qp->drawText(resreforig[0][0]+550,300-resreforig[0][1],"Reflection AT Origin");

int resrefxy[1][2]={0};

int refxy[2][2]={{0,1},{1,0}}; //ref about x=y axis

for(int i=0;i<2;i++)

{

for(int j=0;j<2;j++)

{

for(int k=0;k<2;k++)

{

resrefxy[i][j]+=pt[i][k]*refxy[k][j];

}

}

}

qp->drawPoint(resrefxy[0][0]+550,300-resrefxy[0][1]);

qp->drawText(resrefxy[0][0]+550,300-resrefxy[0][1],"Reflection about X=Y-axis");

qp->drawText(550-10,300,"0");

qp->drawText(550,300,"0");

}
