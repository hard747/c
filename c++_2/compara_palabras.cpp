#include<iostream>
#include<string.h>
using namespace std;
char palabra1[50],palabra2[50];int cont;
char *p1,*p2;
int main()
{
	system("color 0A");
	cout<<"ingrese la primera palabra "<<endl;
	cin>>palabra1;	
	cout<<"ingrese la segunda palabra "<<endl;
	cin>>palabra2;
	p1=palabra1;p2=palabra2;bool band=true;
	cout<<strlen(palabra1)<<endl;	
	for(int j=0;j<strlen(palabra2);j++){
		if(palabra2[j]==palabra1[0]){
			cout<<"si"<<endl;
			cont=0;
			for(int k=0;k<strlen(palabra1);k++){
				if(palabra2[k+j]==palabra1[k]){
					cont=cont+1;
				}
		}
				cout<<cont<<endl;
				if(cont== strlen(palabra1)){
					cout<<"la primera palabra  es parte de la segunda"<<endl;
				band=false;
				break;
				}
			}
			}

	if(band== true){
		cout<<"la primera palabra no es parte de la segunda"<<endl; 
	}
	return 0;
}
