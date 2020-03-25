#include<iostream>
#include<math.h>
#define max 3
using namespace std;
int i,j,n;
int determinante(int num[][max],int n);
int cofactor(int num[][max],int n,int fila, int columna);
int cofactor(int num[][max],int n,int fila, int columna){
	int subnum[max][max];
	int k=n-1;
	int x=0,y=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i != fila && j!=columna)
			{
				subnum[x][y]=num[i][j];
				y++;
				if(y>=n){
					x++;
					y=0;
				}
			}
			
		}
	}
	return (pow(-1.0,fila + columna))*determinante(subnum,k);
}

int determinante(int num[][max],int n){
int det=0.0;
if(n==1){
	det=num[0][0];
}
else{
	for(int j=0;j<n;j++)
	{
		det=det+num[0][j]*cofactor(num,n,0,j);
	}
}
	return det;	
}

int main()
{
	system("color 0A");	
	cout<<"ingrese el orden de la matriz cuadrada"<<endl<<endl<<"   ";
	cin>>n;
	cout<<endl<<endl;
	int num[max][max];
	cout<<"          MATRIZ A"<<endl<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<"introduzca el termino de la fila "<<i+1<<" y de la columna "<<j+1<<" de la matriz A"<<endl;
		cin>>num[i][j];
		}
	}
	system("cls");
	cout<<endl<<endl;
	cout<<"          MATRIZ A";
	cout<<endl<<endl;
	for(int i=0; i<n ;i++)
	{
		for(int j=0; j<n ;j++)
		{
			cout<<"      "<<num[i][j]<<" ";
		}
	cout<<endl<<endl;	
	}
	cout<<endl<<endl;
	
	
		cout<<"        DETERMINANTE DE A: "<<determinante(num,n);
	cout<<endl<<endl;
return 0;
}
