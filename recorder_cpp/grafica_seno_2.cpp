#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14159265
#include <windows.h>  
 void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  
 
int main()
{
 int x=2, y,z=0;
 for(float i=0; i<=360; i+=5)
 {
  y = ceil(sin(i/180*PI)*20)/2;
  if(y==z){
  	y=y+1;
  }
  z=y;
  gotoxy(x, 12-y);printf(".");
  x++;
 }
 getch();
 
 return 0;
}
