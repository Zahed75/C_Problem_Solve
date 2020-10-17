#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main(){
    int gdriver=DETECT, gmode;
    initgraph (&gdriver, &gmode, "..\\bgi");
    float x,y,x1,y1,x2,y2,m,dx,dy,b,xstart,xend;
    printf("\nEnter start point of a line: ");
    scanf("%f%f",&x1,&y1);
    printf("\nEnter start point of a line: ");
    scanf("%f%f",&x2,&y2);
    dx=x2-x1; dy=y2-y1; m=dy/dx; b=y1-m*x1;
    if(dx<0)
    {
        xstart=x2; xend=x1;
    }
    else
    {
        xstart=x1; xend=x2;
    }
    for(x=xstart; x<=xend;x++)
    {
    y=m*x+b;
    printf("\n%f,%f",x,y);
    putpixel(x,y,14);
       delay(300);
    }

    getch();
    return 0;
}
