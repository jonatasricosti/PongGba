#define BG2 1024

// algumas cores
unsigned short blue = 0x7C00;
unsigned short green = 0x3E0;
unsigned short red = 0x1F;
unsigned short white = 0x7FFF;
unsigned short yellow = 0x3FF;

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


DrawRect(20,80,8,20,blue);

DrawRect(240-20-2*8,80,8,20,red);

return 0;
}
