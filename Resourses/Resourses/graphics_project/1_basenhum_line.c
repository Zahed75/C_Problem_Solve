#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main()
{
intgdriver = DETECT, gmode;
initgraph(&gdriver, &gmode,"C:\\TC\\bgi");
for(inti=0; i<=100; i++)
    {
putpixel(100+i,300+i,4);
delay(100);
    }


getch();
    return 0;
}
