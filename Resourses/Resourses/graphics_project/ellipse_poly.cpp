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
    float x,y,a,b,h,k,theta;
    printf("Enter major and minor axis of ellipse:");
    scanf("%f%f",&a, &b);
    printf("\n Enter coordinate value of circle center \n(h,k):");
    scanf("%f%f",&h,&k);
    for(theta=0;theta<=2*3.1415;theta=theta+.01)
    {
        x=a*cos(theta);
        y=b*sin(theta);
        putpixel(x+h,y+k,14);
        delay(50);
    }
    getch();
    return 0;
}
