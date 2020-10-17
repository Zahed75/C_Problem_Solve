#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int main()
{
int gdriver = DETECT, gmode;
initgraph(&gdriver, &gmode,"C:\\TC\\bgi");
line(100,70,50,170);
line(50,170,150,170);
line(100,70,150,170);
getch();
    return 0;
}
