#include<iostream>
using namespace std;
/*void sumoeldoble(int *ptrx)
{
	*ptrx = *ptrx + (*ptrx*2);
}*/


//int x[6]={1,2,3,4,5,6};
int ptrx=18;
int *ptr=&ptrx;
int main()
{
	system("color 0A");
	ptrx=15;
	//ptrx = x;
	//sumoeldoble(&x);
	cout<<&ptrx<<endl;
	/*ptrx = x;
	cout<<endl<<*ptrx;
	ptrx+=4;
	cout<<endl<<*ptrx;	
	ptrx-=2;
	cout<<endl<<*ptrx;	
	char *dias[7]={"domingo","lunes","martes","miercoles","jueves","viernes","sabado"};*/
	return 0;
}
