//                    factorial de un numero
//   hard717

#include<iostream>

using namespace std;

int main()
{
	int n,i,j=1;
	cout<<"introdusca numero"<<endl;
	cin>> n ;
	for(i=1;i<=n;i++)
	{
		j=j*i;
	}
	cout<< j <<endl;
	cin.get();
	return(0);
}
