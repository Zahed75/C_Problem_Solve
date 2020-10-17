#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int main(){
int gdriver=DETECT, gmode;
initgraph (&gdriver, &gmode, "..\\bgi");


for(int i=0; i<=100; i=i+2)
    {
setcolor(14);
        circle(400+i,300,1+i);
setcolor(4);
        circle(400-i,300,1+i);
setcolor(3);
        circle(400,300+i,1+i);
setcolor(15);
        circle(400,300-i,1+i);


delay(300);
    }
getch();
    return 0;
}
