#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
int main()
{
int gdriver = DETECT, gmode;
initgraph (&gdriver, &gmode, "..\\bgi");
float r, h,k, x, y, theta;
printf("Enter the radius of the circle:  ");
scanf("%f",&r);

printf("Enter circle center position:  ");
scanf("%f%f",&h,&k);


    for(theta=(3*3.1416)/2; theta<=(5*3.1416)/2; theta=theta+.01)
    {
        x=r*cos(theta);
        y=r*sin(theta);
        putpixel(x+k,y+h,14);
        delay(10);
    }
;
 for(theta=(3*3.1416)/2; theta>=(3.1416)/2; theta=theta-.01)
    {
        x=r*cos(theta);
        y=r*sin(theta);
        putpixel(x+320,y+h,14);
        delay(10);
    }


getch();
return 0;
}
