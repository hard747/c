#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<list>
using namespace std;


#define arriba 72
#define izquierda 75 
#define derecha  77
#define abajo 80

//funcion para ubicar el cursor
void gotoxy(int x,int y)
{
	HANDLE hCon;
	hCon= GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hCon,dwPos);
}
//funcion para ocultar el cursor
void OcultarCursor(){
	HANDLE hCon;
	hCon= GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize=1;
	cci.bVisible=FALSE;//oculta el cursor
	SetConsoleCursorInfo(hCon,&cci);
}
//funcion para pintar limites
void pintar_limites()
{
 for (int i=2; i<78; i++)
	{
	 gotoxy(i,3); printf("%c",205); 
	 gotoxy(i,33); printf("%c",205);
	} 
for (int i=4; i<33; i++)
	{ 
	gotoxy(2,i); printf("%c",186);
	gotoxy(77,i);printf("%c",186); 
	}
 	gotoxy(2,3); printf("%c",201);
  	gotoxy(2,33); printf("%c",200); 
  	gotoxy(77,3); printf("%c",187); 
  	gotoxy(77,33);printf("%c",188);
} 


class Nave
{	
	int x,y,corazon,vidas;
	public:
	Nave(int _x,int _y,int _corazon,int _vidas);
	int X(){ return x;}
	int Y(){ return y;}
	int VID(){return vidas;}
	void COR(){corazon--;}
	void pintar();
	void borrar();
	void mover();
	void pintar_corazon();	
	void morir();
	protected: 
};
Nave::Nave(int _x,int _y,int _corazon,int _vidas)
{
	x= _x;
	y=_y;
	corazon=_corazon;
	vidas=_vidas;
}

void Nave::pintar(){
	gotoxy(x,y);printf("  %c",30);
	gotoxy(x,y+1);printf(" %c%c%c",40,207,41);
	gotoxy(x,y+2);printf("%c%c %c%c",30,190,190,30);
}
void Nave::borrar(){
	gotoxy(x,y);printf("        ");
	gotoxy(x,y+1);printf("        ");
	gotoxy(x,y+2);printf("        ");
	
}
void Nave::mover(){
	if(kbhit())
		{//detecta la tecla
			char tecla=getch();
			gotoxy(x,y);borrar();//imprime espacio
			if(tecla== 75 && x>3)x--;
			//if(tecla== 77&& x+6<77)x++;
			if(tecla== 77&& x+6<75)x++;
			if(tecla==72&&y>6)y--;
			if(tecla== 80&&y+3<33)y++;
			if(tecla== 'e')corazon--;
			gotoxy(x,y);pintar();//imprime asterisco
			pintar_corazon();
		}	
}

void Nave::pintar_corazon()
{
	gotoxy(50,2);printf("VIDAS %d",vidas);
	gotoxy(64,2);printf("SALUD");
	gotoxy(70,2);printf("      ");
	for(int i=0;i<corazon ;i++)
	{
		gotoxy(70+i,2);printf("%c",3);	
	}	
}

void Nave::morir(){
	if(corazon==0)
	{
		borrar();
		gotoxy(x,y);  printf("   **   ");
		gotoxy(x,y+1);printf("  ****  ");
		gotoxy(x,y+2);printf("   **   ");
		Sleep(200);
		
		borrar();
		gotoxy(x,y);  printf(" * ** *");
		gotoxy(x,y+1);printf("  **** ");
		gotoxy(x,y+2);printf(" * ** *");
		Sleep(200);
		borrar();
		vidas--;
		corazon=3;
		pintar_corazon();
		pintar();
	}
}

class Asteroide{
	int x,y;
	public:
	Asteroide(int _x,int _y);
	void pintar();
	void mover();
	void choque(class Nave &N);
	int X(){ return x;}
	int Y(){ return y;}
};
Asteroide::Asteroide(int _x,int _y){
	x= _x;
	y= _y;
}
void Asteroide::pintar(){
	gotoxy(x,y);printf("%c",184);
}
void Asteroide::mover(){
	gotoxy(x,y);printf(" ");
	y++;
	if(y>32){
		x=rand()%71+4;
		y=4;
	}
	pintar();
}
void Asteroide::choque(class Nave &N){
	if(x>=N.X() && x<N.X()+6 && y>=N.Y() && y<=N.Y()+2){
		N.COR();
		N.borrar();
		N.pintar();
		N.pintar_corazon();
		x=rand()%71+4;
		y=4;
	}
}

class Bala{
	int x,y;
	public:
		Bala(int _x,int _y);
		int X(){return x;}
		int Y(){return y;}
		void mover();
		bool fuera();
};
Bala::Bala(int _x,int _y){
	x=_x;
	y=_y;
}
void Bala::mover(){
	gotoxy(x,y);printf(" ");
	y--;
	gotoxy(x,y);printf("*");
}
bool Bala::fuera(){
	if(y <=6){return true;}
	return false;
}

int main()
{
	
	system("color 2E");
	OcultarCursor();
	pintar_limites();
	Nave N=Nave(37,30,3,3);
	N.pintar();
	//Asteroide A = Asteroide(10,4),B=Asteroide(4,8), C=Asteroide(15,8);
	list<Asteroide*> K;
	list<Asteroide*>::iterator itK;
	for(int i=0;i<5;i++){
		K.push_back(new Asteroide(rand()%75 + 3,rand()%5 +4));	
	}
	list<Bala*> L;
	list<Bala*>::iterator it;
	bool game_over=false;
	int puntos=0;
	while(!game_over) //este es el ciclo del juego 
	{
		gotoxy(4,2);printf("PUNTOS %d",puntos);
		if(kbhit()){
			char tecla=getch();
			if(tecla == 'a'){
				L.push_back(new Bala(N.X()+2,N.Y()-1));
			}
		}
		for(it = L.begin();it != L.end();it++){
			(*it)->mover();
			if((*it)->fuera()){
				gotoxy((*it)->X(),(*it)->Y());printf(" ");
				delete(*it);
				it=L.erase(it);
			}
		}
		//A.mover();A.choque(N);  B.mover();B.choque(N);C.mover();C.choque(N);
		for(itK = K.begin();itK != K.end();itK++){
			(*itK)-> mover();
			(*itK)-> choque(N);
	}
		for(itK = K.begin();itK != K.end();itK++){
				for(it = L.begin();it!=L.end();it++){
					if((*itK)->X() == (*it)->X() && ((*itK)->Y()+1==(*it)->Y() || (*itK)->Y() ==(*it)->Y() ))
					{
					gotoxy((*it)->X(),(*it)->Y());printf(" ");
					delete(*it);
					it=L.erase(it);
					K.push_back(new Asteroide(rand()%74+3,5));
					gotoxy((*itK)->X(),(*itK)->Y());printf(" ");
					delete(*itK);
					itK=K.erase(itK);
					puntos+=5;
					}
				}
			}
		if(N.VID()==0){
			game_over=true;
		}	
		N.morir();
		N.mover();
		Sleep(30);
	}	
	system("pause>arch");//elimina el mensaje final	
	return 0;
}
