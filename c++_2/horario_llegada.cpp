#include <iostream>
using namespace std;

int h,m,k;
int main () 
{
	system("color 0A");
	cout << " Introdusca la hora de llegada" << endl;
	cin >> h;
	cout << "Introdusca los minutos" << endl;
	cin>>m;
	
			if (((h<0 )||(h>=24))||(( m<0)||(m>59)))k=0;
			
			else if ((h==8) && (m==0))k=1;
			else if ((h<8) && (m>=0)&&(m<=59))k=2;
			else if ((h >= 8) && (m>=0) && (m <=59))k=3;
		
	switch(k){	
		case 0:cout << "Horario incorrecto" <<endl;
			break;	
		case 1:cout << "Hora puntual" <<endl;
			break;
		case 2:	cout << "Adelantado " << 8-h-1 << " Horas " << 60-m << " Minutos" << endl;
			break;
		case 3:	cout << "Atrasado " << h-8 <<" Horas "<< m << " Minutos" << endl;
			break;						
	}
	return 0;
}
