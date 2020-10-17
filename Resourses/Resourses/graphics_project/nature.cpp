#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int tree(int t,int q)
{
int r=15;
setfillstyle(6,6);
rectangle(150+t,390+q,170+t,340+q);
floodfill(151+t,342+q,2);
setfillstyle(11,2);
fillellipse(142+t,347+q,r,r);
fillellipse(160+t,330+q,r,r);
fillellipse(175+t,340+q,r,r);
fillellipse(180+t,350+q,r,r);
}
int  main()
{
int gd=DETECT,gm;
int i,j,k,t,q,r;
float x,y;
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(2);
rectangle(0,0,getmaxx(),getmaxy());
for(i=0;i<getmaxx();i+=120)
{
line(i,250,i+60,170);
line(i+60,170,i+120,250);
}

t=10;

line(0,400,getmaxx(),350);
B:line(50+t,280,50+t,320);
line(50+t,320,60+t,320);
line(60+t,320,70+t,320);
line(70+t,320,80+t,320);
line(130+t,320,80+t,320);
line(70+t,320,70+t,300);
line(60+t,300,60+t,320);
line(70+t,300,60+t,300);
line(80+t,320,80+t,280);
line(130+t,320,130+t,280);
line(80+t,280,130+t,280);
line(50+t,280,80+t,280);
line(50+t,280,65+t,260);
line(65+t,260,80+t,280);
line(65+t,260,110+t,260);
line(130+t,280,110+t,260);

setfillstyle(1,8);
floodfill(51+t,282,2);
setfillstyle(1,4);
floodfill(61+t,302,2);
setfillstyle(1,4);
floodfill(81+t,282,2);
setfillstyle(1,5);
floodfill(66+t,270,2);
setfillstyle(4,6);
floodfill(100+t,270,2);

if(t==10)
{
t=320;
goto B;
}

tree(0,-10);
tree(100,-20);
tree(30,-100);
tree(350,-60);
tree(160,-50);


setfillstyle(1,12);
fillellipse(150,80,35,35);

setfillstyle(2,9);
floodfill(10,10,2);

setfillstyle(1,3);
floodfill(1,getmaxy()-1,2);

setfillstyle(1,10);
floodfill(49,270,2);


getch();
}
