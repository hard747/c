#include<iostream>

using namespace std;

int main()
{	
int num,x,y;
cout<<"introduzca el numero:"<<endl;
cin>>num;
x=num%10;
while(num>=10)
{
	num=num/10;
	if(num<10)
	{
		y=num;
	}
}
system("cls");	
cout<<endl<<"el producto entre la primera y la ultima cifra es: "<<x*y<<endl;
return 0;
}
