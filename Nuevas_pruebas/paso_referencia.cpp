 #include<stdio.h>
 #include<iostream>
 using namespace std;
 void cambio(int*&, int*&);
 void cambio_2(int , int );
 void cambio_3(char& , char& );
 void cambio_4(char , char );
 struct prueba{
 	int nombre;
 	double promedio;
 	struct prueba *pruebita;
 };
 
 int main(){
 	char X,Y,M,N;
 	X='a';
 	Y='b';
 	M='a';
 	N='b';
 	int x,y,m,n,*z,*k;
 	//int arreglo[] ={32,12,34};
 	x=5;y=10;
 	z=&x;
 	k=&y;
 	
 	//cout<<&arreglo[0]<<"el siguiente es: "<<&arreglo[1]<<endl;
 	//printf("%p \n",z);
 	m=7;
 	n=14;
 	
	cambio(z,k);
 	printf("El valor actual de x es %i y el valor actual de y es %i \n\n",x,y);
 	
 	//cambio_2(x,y);
 	//printf("El valor actual de x es %i y el valor actual de y es %i \n\n",x,y);
 	
 	//cambio_3(X,Y);
 	//printf("El valor actual de x es %c y el valor actual de y es %c \n\n",X,Y);
 	
 	//cambio_4(M,N);
 	//printf("El valor actual de x es %c y el valor actual de y es %c \n\n",M,N);
 	//system("PAUSE");
 	return 0;
 }
 void cambio(int*& a,int*& b){
	int aux;
	aux=*a;
	*a=*b;
	*b=aux;
	 	
 }
 void cambio_2(int a,int b){
	int aux;
	aux=a;
	a=b;
	b=aux;
	printf("El numero x es: %i y el numero y es: %i \n",a,b); 	
 }
  void cambio_3(char& a,char& b){
	char aux;
	aux=a;
	a=b;
	b=aux;

	 	
 }
   void cambio_4(char a,char b){
	char aux;
	aux=a;
	a=b;
	b=aux;
	 	
 }
