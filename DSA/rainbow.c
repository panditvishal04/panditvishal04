#include<stdio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
     graphics DETECT;
    int gdriver=DETECT,gmode;
    int x,y,i;
     initgraph(&gdriver,&gmode);
     x=getmaxx()/2;
     y=getmaxy()/2;
     for(i=30;i<200;i++)
     {
        delay(100);
        setcolor(i/10);
        arc(x,y,0,180,i-10);
     }
     return 0;
}
