#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main()
{
    int gdriver = DETECT, gmode;
    initgraph(&gdriver, &gmode, "..\\bgi");

    setcolor(10);
    rectangle(100,100,350,230);
    setfillstyle(1,2);
    floodfill(101,101,10);


    setcolor(14);
    circle(200,165,50);
    setfillstyle(1,4);
    floodfill(200,200,14);

    getch();
    return 0;
}
