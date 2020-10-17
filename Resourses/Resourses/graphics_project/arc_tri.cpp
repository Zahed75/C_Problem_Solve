#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main()
{
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode, "..\\bgi");

float x,y,r,h,k,theta;
printf("Enter radious of a cirlce: ");
scanf("%f",&r);

printf("\n Enter coordinate value of circle center \n(h,k): ");
scanf("%f%f",&h,&k);
for(theta=-3.1416/2; theta<=3.1416*1.5/3; theta=theta+.1/5)
    {
        x=r*cos(theta);
        y=r*sin(theta);
putpixel(x+h,y+h,10);
delay(50);
    }
getch();
    return 0;
}
