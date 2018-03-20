#include<graphics.h>
//#include <conio.h>
int main()
{
  //  int gd = DETECT, gm;
 //   initgraph(&gd,&gm,NULL);
 initwindow(422,547,"images");
  readimagefile("logo.jpg",0,0,422,547);
 getch();
    closegraph();
   
}
