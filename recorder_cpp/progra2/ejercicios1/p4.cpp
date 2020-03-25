#include<iostream>

int mcd(int a, int b)
{
	int x;
	if(b==0)
	{
		x=a;
	}
	else
	{
		x=mcd(b,a%b);	
	}
	return x;
}
int main()
{	
	system("color 0A");
	int m,n;
	std::cout<<"introduzca el primer numero"<<std::endl;
	std::cin>>m;
	std::cout<<"introduzca el segundo numero"<<std::endl;
	std::cin>>n;system("cls");
	std::cout<<std::endl<<std::endl<<"          MCD("<<m<<","<<n<<") = "<<mcd(m,n)<<std::endl;
	return 0;
}
