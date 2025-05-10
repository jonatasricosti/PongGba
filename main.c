


#define VIDC_BASE_HALF	((volatile unsigned short int*) 0x04000000)
#define VCOUNT (VIDC_BASE_HALF[3])


#define BUTTON_A       1
#define BUTTON_B       2
#define BUTTON_SELECT  4
#define BUTTON_START   8
#define BUTTON_RIGHT   16
#define BUTTON_LEFT    32
#define BUTTON_UP      64
#define BUTTON_DOWN    128
#define BUTTON_R       256
#define BUTTON_L       512

// use essa função pra ver se um botão do game boy advance foi apertado
int buttonPressed(int button)
{
	volatile unsigned int *BUTTON = (volatile unsigned int*)0x4000130;
	
	if( !( (*BUTTON) & button)  )
	{
		return 1;
	}
	
	else
	{
		return 0;
	}
}



// use essa função pra fazer o VSync
void waitRetrace()
{
	while(VCOUNT != 160);
	while(VCOUNT == 160);
}


const int screen_width  = 240;
const int screen_height = 160;

#define BG2 1024

// algumas cores do game boy advance BRG15bits
unsigned short blue = 0x7C00;
unsigned short green = 0x3E0;
unsigned short red = 0x1F;
unsigned short yellow = 0x3FF;
unsigned short white = 0x7FFF;
unsigned short black = 0;

// use essa função pra ativar o mode de vídeo do game boy advance
void SetVideoMode(int mode)
{
	*(unsigned long *)0x4000000 = mode;
}


unsigned short *vram = (unsigned short *)0x6000000;

// use essa função pra desenhar uma pixel na tela do gba mode3
void DrawPixel(int x, int y, unsigned short color)
{
	vram[x+y*240] = color;
}


// use essa função pra colocar cor de fundo na tela do gba mode 3 e 5
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

// use essa função pra detectar colisão entre dois retângulos
int AABB(int x1, int y1, int width1, int height1, int x2, int y2, int width2, int height2)
{
    if(x1 < x2 + width2 &&
	x2 < x1+width1 &&
	y1 < y2+height2 &&
	y2 < y1+height1)
	{
		return 1;
	}

	return 0;
}

// essa estrutura representa um retângulo
typedef struct rectangle
{
	int x;
	int y;
	int width;
	int height;
	int score;
	
}rectangle;

rectangle player1;
rectangle player2;

// essa estrutura representa uma bola
typedef struct _BALL
{
	int x;
	int y;
	int vx;
	int vy;
	int width;
	int height;
}_BALL;


_BALL ball;

// inicia as propriedades dos retângulos
void ResetGame()
{
	player1.width = 8;
	player1.height = 28;
	player1.x = player1.width;
	player1.y = (screen_height-player1.height)/2;
	player1.score = 0;
	
	player2.width = 8;
	player2.height = 28;
	player2.x = screen_width - 2*player2.width;
	player2.y = (screen_height-player2.height)/2;
	player2.score = 0;
	
	ball.width  = 6;
	ball.height = 6;
	ball.x = (screen_width-ball.width)/2;
	ball.y = (screen_height-ball.height)/2;
	
	ball.vx = 5;
	ball.vy = 2;
}

// essa função move a bola e verifica colisões
void MoveBall()
{
	ball.x = ball.x + ball.vx;
	ball.y = ball.y + ball.vy;
	
	// se passou do lado esquerdo da tela
	if(ball.x < 0)
	{
		// coloca a bola no centro da tela
		ball.x = (screen_width-ball.width)/2;
		ball.y = (screen_height-ball.height)/2;
		player2.score = player2.score+1; // player2 faz um ponto
	}
	
	// se passou do lado direito da tela
	if(ball.x > screen_width - ball.width)
	{
		// coloca a bola no centro da tela
		ball.x = (screen_width-ball.width)/2;
		ball.y = (screen_height-ball.height)/2;
		player1.score = player1.score+1; // player1 faz um ponto
	}
	
	
	// se passou do lado de cima da tela
	if(ball.y < 0)
	{
		ball.vy = -ball.vy;
	}
	
	// se passou do lado de baixo da tela
	if(ball.y > screen_height - ball.height)
	{
		ball.vy = -ball.vy;
	}
	
	
	// colisão com o player1
	if(AABB(player1.x,player1.y,player1.width,player1.height,ball.x,ball.y,ball.width,ball.height))
	{
		ball.vx = -ball.vx;
	}
	
	// colisão com o player2
	if(AABB(player2.x,player2.y,player2.width,player2.height,ball.x,ball.y,ball.width,ball.height))
	{
		ball.vx = -ball.vx;
	}
}

// use essa função pra mover o player1
void MovePlayer1(int speed)
{
	if(buttonPressed(BUTTON_DOWN))
	{
		player1.y = player1.y+speed;
	}
	
	if(buttonPressed(BUTTON_UP))
	{
		player1.y = player1.y-speed;
	}
	
	// colisão lado de cima
	if(player1.y < 0)
	{
		player1.y = 0;
	}
	
	// colisão lado de baixo
	if(player1.y > screen_height-player1.height)
	{
		player1.y = screen_height-player1.height;
	}
}


// use essa função pra mover o player2 por inteligência1 artificial
void MovePlayer2(int speed)
{
	int py = player2.y + player2.height/2;
	
	if(ball.vx > 0 && ball.x > 100)
	{
		if(py > ball.y)
		{
			// move pra cima
			player2.y = player2.y - speed;
		}
		
		
		if(py < ball.y)
		{
			// move pra baixo
			player2.y = player2.y + speed;
		}
	}
		
	// colisão lado de cima
	if(player2.y < 0)
	{
		player2.y = 0;
	}
	
	// colisão lado de baixo
	if(player2.y > screen_height-player2.height)
	{
		player2.y = screen_height-player2.height;
	}
}

// use essa função pra monstrar o placar na tela
void DrawScore()
{
	char m1[10];
	char m2[10];
	
	
	sprintf(m1,"%i",player1.score);
	sprintf(m2,"%i",player2.score);
	
	DrawRect(96,46,3*8,8,white);
	DrawRect(136,46,3*8,8,white);
	
	DrawTextMode3(96,46,m1,0xff);
	DrawTextMode3(136,46,m2,0xff);
	
	
	if(player1.score >= 99)
	{
		player1.score = 99;
	}
	
	if(player2.score >= 99)
	{
		player2.score = 99;
	}

}


int main()
{

// ativa o mode 3 e o bg2
SetVideoMode(3 | BG2);


ResetGame();

BackgroundColor(white);

// game loop
while(1)
{
	waitRetrace();
	
	// desenha retângulos brancos para limpar a tela estamos no mode 3 por isso temos que fazer isso
	DrawRect(119,0,2,160,white);
	DrawRect(player1.x,player1.y,player1.width,player1.height,white);
	DrawRect(player2.x,player2.y,player2.width,player2.height,white);
	DrawRect(ball.x,ball.y,ball.width,ball.height,white);
	
	MoveBall();
	MovePlayer1(3);
	MovePlayer2(4);
	
	// desenha os retângulos coloridos
	DrawScore();
	DrawRect(119,0,2,160,0); // desenha a rede
	DrawRect(player1.x,player1.y,player1.width,player1.height,blue); // desenha o retângulo azul
	DrawRect(player2.x,player2.y,player2.width,player2.height,red); // desenha o retângulo vermelho
	DrawRect(ball.x,ball.y,ball.width,ball.height,0xff); // desenha a bola

}


return 0;
}
