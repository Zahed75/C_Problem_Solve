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
for(theta=0; theta<=3.1416/4; theta=theta+.01)
    {
        x=r*cos(theta);
        y=r*sin(theta);
putpixel(x+h,y+h,14);
putpixel(-x+h, y+k, 4);
putpixel(x+h, -y+k, 12);
putpixel(-x+h, -y+k,2);
putpixel(y+h, x+k, 5);
putpixel(-y+h,x+k,14);
putpixel(y+h,-x+k,10);
putpixel(-y+h, -x+k,15);

delay(50);
    }
getch();
    return 0;
}
