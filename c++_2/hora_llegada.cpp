#include<iostream>
using namespace std;

int main()
{
	system("color 0A");
	cout<<"introdusca su horario de llegada"<<endl;
	cout<<"la hora"<<endl;int h;
	cin>>h;
	cout<<"los minutos"<<endl;int i;
	cin>>i;
		if(h>=8 && i >0)
		{
			cout<<"esta retrazado "<<i<<"minutos"<<endl;
		}
		else if(h==8 && i==0)
		{
			cout<<"esta en la hora puntual"<<endl;
		}
		else if(h<8 )
		{
			cout<<"esta adelantado "<<60-i<<"minutos"<<endl;
		}
	
return 0;
}
