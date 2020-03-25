#include<stdio.h>
#include<windows.h>

void gotoxy(int x,int y)
{
	HANDLE hCon;
	hCon= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
}
void pintar(int numero) 
{
HANDLE hConsoleOutput; 
COORD coord; 
hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute (GetStdHandle (STD_OUTPUT_HANDLE),numero);
} 
/*class radio
{
	int voltaje;
	int potencia;
public:
	int radio radio(int x),radio(float y);
	void volumen(int x);
	void sintonizador(float y);	
}

radio::volumen(int x)
{
	printf("el volumen es: %d",x);
}*/

int main()
{
	//radio pioner= new radio(20,104.5)
	system("color 0A");
	int x=4,y=4;
	for(int k=0;k<3;k++)
	{
	for(int i=0;i<70;i++)
	{
		for(int j=0;j<30;j++)
		{
			gotoxy(x+i,y+j);
			if((x+i)%2==0 && (y+j)%2==0)
			{
				pintar(1); 
				printf("*");
			}
			else if((x+i)%2!=0 && (y+j)%2!=0)
			{
				pintar(2); 
				printf("/");
			}
			else if((x+i)%2==0 && (y+j)%2!=0)
			{
				pintar(3); 
				printf("#");
			}
			else
			{
				printf("&");
			}
		}
	}
	}
	system("pause>arch");
	return 0;
}
