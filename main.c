const int screen_width  = 240;
const int screen_height = 160;

#define BG2 1024

// algumas cores
unsigned short blue = 0x7C00;
unsigned short green = 0x3E0;
unsigned short red = 0x1F;
unsigned short yellow = 0x3FF;
unsigned short white = 0x7FFF;
unsigned short black = 0;

// use essa função pra ativar o mode de video
void SetVideoMode(int mode)
{
	*(unsigned long *)0x4000000 = mode;
}


unsigned short *vram = (unsigned short *)0x6000000;

// use essa função pra desenhar pixel na tela mode3
void DrawPixel(int x, int y, unsigned short color)
{
	vram[x+y*240] = color;
}


// use essa função pra colocar cor de fundo na tela mode 3 e 5
void BackgroundColor(unsigned short color)
{
	int i;
	for(i = 0; i < screen_width*screen_height; i++)
	{
		vram[i] = color;
	}
}

#include "font.h"
// use essa função pra desenhar um caractere no mode 3 precisa de font.h e só tem letras maiúsculas
void DrawCharMode3(int left, int top, char letter, unsigned short color)
{
	int x,y,draw;
	
	for(y = 0; y < 8; y++)
	{
		for(x = 0; x < 8; x++)
		{
			// pegue um pixel do font char
			draw = font[ (letter-32)*64 + x+8*y];
			
			// se pixer = 1, então desenhe
			if(draw == 1)
			{
				DrawPixel(left + x, top + y, color);
			}
		}
	}
}

// use essa função pra desenhar um texto no mode 3 precisa de font.h e só tem letras maiúsculas
void DrawTextMode3(int left, int top, char *text, unsigned short color)
{
	int pos = 0;
	while(*text)
	{
		DrawCharMode3(left+pos,top,*text++,color);
		pos = pos+8;
	}
}

// use essa função pra desenhar um retângulo na tela do game boy advance mode3
void DrawRect(int x, int y, int width, int height, unsigned short color)
{
	int left = x;
	int right = x + width;
	int up = y;
	int down = y+height;
	
	int i,j;
	
	for(j = up; j < down; j++)
	{
		for(i = left; i < right; i++)
		{
			DrawPixel(i,j,color);
		}
	}
}

int main()
{

// ativa o mode 3 e o bg2
SetVideoMode(3 | BG2);


BackgroundColor(white);

// game loop
while(1)
{
	DrawRect(20,80,8,28,blue);
	DrawRect(240-20-2*8,80,8,28,red);
	
	DrawTextMode3(1,20,"PROGRAMAR EH LEGAL",black);
	DrawTextMode3(1,30,"C E C++ EH MUITO LEGAL",green);
	DrawTextMode3(1,40,"PONG PARA O GAME BOY ADVANCE",yellow);
}


return 0;
}
