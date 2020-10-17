#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main() {
int gdriver = DETECT, gmode;
initgraph (&gdriver, &gmode, "..\\bgi");
float r=50, theta, x, y;
for(theta=0; theta<=7*3.1416; theta=theta+0.1)
    {
setcolor(14);
circle(300,300,10);
setcolor(14);
        x=200*cos(theta);
        y=200*sin(theta);
putpixel(x+300,y+300,15);
circle(x+300,y+300,r);
setfillstyle(1,10);
floodfill(x+300, y+300, 14);
line(300,300, x+300, y+300);
delay(10);
    }
getch();
return 0;
}
