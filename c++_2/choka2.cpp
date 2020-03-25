#include <iostream>
using namespace std;
int main () 
{
	int h,n,m;
	cout << " INTRODUCIR HORA" << endl;
	cin >> h;
	cout << "INTRODUCIR MINUTOS" << endl;
	cin>>m;
    if (((h<0 )||(h>=24))||(( m<0)||(m>59)))
	{
		n=1;
	}
	 else if ((h==8) && (m==0))
	{
		n=2;
	}
	 else if ((h >= 8) && (m>0) && (m <=59))
	{
		n=3;
	}
	/*else if ((h>8) && (m>=0)&&(m<=59))
	{
		n=4;
	}*/
	else if ((h<8) && (m>=0)&&(m<=59))
	{
		n=4;
	}
	switch(n){
		case 1:
			{
			cout << "HORA INCORRECTA" <<endl;
			break;	
			}
			case 2:
				{
					cout << "HORA EXACTA" <<endl;
					break;
				}
				
				case 3:
					{
						cout << "RETRASADO " << h-8 <<" HORAS "<< m << " MINUTOS" << endl;
						break;
					}
					
					
						case 4:
							{
								cout << "ADELANTADO " << 8-h-1 << " HORAS " << 60-m << " MINUTOS" << endl;
								break;
							}
							
	}
	return 0;
	}
