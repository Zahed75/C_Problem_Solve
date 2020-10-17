#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<dos.h>

int main( )
{
int gdriver = DETECT, gmode;
initgraph (&gdriver, &gmode, "..\\bgi");
float r,h,k, x, y;
printf("Circle Generation Algorithms using Polynomial method \n");
printf("Enter the radius of the circle:  ");

scanf("%f",&r);
printf("Enter circle center position:  ");
scanf("%f%f",&h,&k);

for(x=0; x<=r; x=x+0.01)
{
        y=sqrt(r*r-x*x);

putpixel(x+h,y+k,14);
putpixel(x+h,-y+k,14);
putpixel(-x+h,y+k,14);
putpixel(-x+h,-y+k,14);
    }
getch( );
return 0;
}
