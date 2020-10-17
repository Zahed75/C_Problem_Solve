#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

int main(){

  int gdriver = DETECT,gmode;
  initgraph(&gdriver, &gmode,"..\\bin");

  setcolor(8);
  rectangle(45,380,50,80);
  setfillstyle(1,7);
  floodfill(46,401,8);



  getch();
  return 0;
}
