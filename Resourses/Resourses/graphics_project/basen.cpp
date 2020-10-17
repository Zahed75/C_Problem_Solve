#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main()
{
int gdriver = DETECT, gmode;
initgraph (&gdriver, &gmode, "..\\bgi");
int x,y,x1,y1,x2,y2,m,dx,dy,b,d, ds, dt;
printf("Enter start point of a line:  ");
scanf("%d%d",&x1,&y1);

printf("Enter end point of a line:  ");
scanf("%d%d",&x2,&y2);

dx=x2-x1; dy=y2-y1; ds=2*dy, dt=2*(dy-dx), d=2*dy-dx;
x=x1;
y=y1;


while(x<=x2){
        x++;
        if(d<0)
        {
            d=d+ds;
        }

        else
        {
            y++;
            d=d+dt;
        }

        printf("\n%d,%d",x,y);
        putpixel(x,y,14);
        delay(300);
}
getch();
return 0;
}
