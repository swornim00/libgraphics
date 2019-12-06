#include"graphics.h"

void initgraph(int *gdriver, int *gmode, char *pathtodriver){
    window_h =500;
    window_w =500;
    if(gdriver != DETECT){
        printf("Graphics Driver not found\n");
    }
    if(SDL_Init(SDL_INIT_EVERYTHING)<0){
        printf("Failed to Initialize Video\n");
    }

    window = SDL_CreateWindow("Shivain Window",SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,window_h,window_w,SDL_WINDOW_RESIZABLE);
    if(!window){
        printf("Failed to create window");
    } 

    renderer = SDL_CreateRenderer(window,-1,SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
}


void checkq(){
    SDL_RenderPresent(renderer);
    int isrunning =1;
    SDL_Event event;
    while(isrunning){
        while(SDL_PollEvent(&event)){
            if(event.type ==SDL_QUIT){
                isrunning =0;
            }
        }
    }
}
    

void closegraph(){    
    checkq();
    SDL_Quit();
}

void delay(int _mseconds){
    clock_t starting_time = clock();
    printf("Adding Delay");
    printf("%lu\n",starting_time);
    printf("%lu",starting_time+1000);
    while(clock() < starting_time+_mseconds*100);
}

void putpixel(int x,int y, int _color){
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
    SDL_RenderDrawPoint(renderer,x,y);
}

int getmaxx(){
    return window_h;
}

int getmaxy(){
    return window_w;
}

int setcolor(int _color){
    SDL_SetRenderDrawColor(renderer,255,255,255,255);
}

void line(int x1,int y1,int x2,int y2){
    SDL_RenderDrawLine(renderer,x1,y1,x2,y2);
}