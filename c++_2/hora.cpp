#include<iostream>
using namespace std;

int main()
{
	system("clor 0A");
	cout<<"introdusca su horario de llegada"<<endl;
	cout<<"la hora"<<endl;int h;
	cin>>h;
	cout<<"los minutos"<<endl;int minutos;
	cin>>minutos;
	
	switch(minutos)
	{
		for(int i=0;i<60;i++)
		{
			case i:cout<<"esta en la hora puntual"<<endl;
		}
			break;
		case: minutos%60>0:	cout<<"esta retrazado "<<minutos<<"minutos"<<endl;
		break;
		case: minutos%60<0: cout<<"esta adelantado "<<minutos<<"minutos"<<endl;
		break;	
	}
		switch(n){
		case 1:
			{
			cout << "HORA INCORRECTA" <<endl;	
			}
			break;
			case 2:
				{
					cout << "HORA EXACTA" <<endl;
				}
				break;
				case 3:
					{
						cout << "RETRASADO " << m << " MINUTOS" << endl;
					}
					break;
					case 4:
						{
							cout << "RETRASADO " << h-8 <<" HORAS " << m << " MINUTOS" << endl;
						}
						break;
						case 5:
							{
								cout << "ADELANTADO " << 8-h << " HORAS" << 60-m << " MINUTOS" << endl;
							}
							break;
	}
	
	return 0;
}
