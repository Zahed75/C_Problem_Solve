#include<stdlib.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include<conio.h>
int main(){
    int gDriver = DETECT, gMode;
    initgraph(&gDriver, &gMode, "..\\bgi");

    setcolor(10);
    rectangle(50, 50, 500, 300);
    setfillstyle(1, 2);
    floodfill(150, 250, 10);

    setcolor(10);
    circle(275, 175, 75);
    setfillstyle(1, 4);
    floodfill(275, 175, 10);

    setcolor(10);
    rectangle(50, 50, 55, 1500);
    setfillstyle(2, 10);
    floodfill(52, 62, 10);

    getch();

return 0;
}
