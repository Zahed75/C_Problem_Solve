#include<graphics.h>
#include <math.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "..\\bgi");
    float r=50, h=500, k=300, theta, x, y;
    setcolor(4);
    circle(300,300,10);

    for(theta=0; theta<=7*3.1416; theta=theta+.1)
    {
        setcolor(14);
        x=200*cos(theta);
        y=200*sin(theta);
        putpixel(x+500, y+500, 15);
        circle(x+500, y+500, r);
        setfillstyle(1,14);
        floodfill(x+500,y+500,14);
        line(500,300,x+500,y+500);
        delay(30);
        cleardevice();

    }
    getch();
    return 0;
}
