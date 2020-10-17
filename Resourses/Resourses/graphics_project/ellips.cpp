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
float a, b, h,k, x, y;

printf("Enter the length of major axis:  ");
scanf("%f",&a);
printf("Enter the length of minor axis:  ");
scanf("%f",&b);
printf("Enter circle center position:  ");
scanf("%f%f",&h,&k);

for(x=0; x<=a; x=x+0.01)  {
        y=b*sqrt(1-(x*x)/(a*a));
putpixel(x+h,y+k,14);
putpixel(x+h,-y+k,14);
putpixel(-x+h,y+k,14);
putpixel(-x+h,-y+k,14);
    }
getch();
return 0;
}
