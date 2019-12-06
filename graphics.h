#ifndef GRAPHICS_H

#define GRAPHICS_H

#include<SDL2/SDL.h>

/* graphic drivers */
enum gdriver{DETECT=0, USER, VGA=9};
//enum graphics_modes{VGALO=0, VGAMED, VGAHI, VGAMAX, VGA640, VGA800, VGA1024, USERMODE};

 SDL_Renderer *renderer;
 SDL_Window *window;
/* As we have sixteen colors */
enum _color{BLACK=0, BLUE, GREEN, CYAN, RED, MAGENTA, BROWN, LIGHTGRAY, DARKGRAY,LIGHTBLUE, LIGHTGREEN, LIGHTCYAN, LIGHTRED, LIGHTMAGENTA, YELLOW, WHITE};
int window_h, window_w;
void initgraph(int *gdriver, int *gmode, char *pathtodriver);
void closegraph();
void getch();
void delay(int _mseconds);
void checkq();
void putpixel(int x, int y, int color);
void line(int x1,int y1,int x2,int y2);
int getmaxx(void);
int getmaxy(void);
int kbhit();

#endif