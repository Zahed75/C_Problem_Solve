#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main()
{
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode,"C:\\TC\\bgi");
for(int i=0; i<=100; i++)
    {
putpixel(200+i,400+i,10);
delay(100);

    }


getch();
    return 0;
}
