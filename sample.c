#include"graphics.h"

int main(){
    int gmode, gdriver =DETECT;
    initgraph(&gdriver, &gmode, "");
    setcolor(0);
    line(0,0,100,100);
    closegraph();
}