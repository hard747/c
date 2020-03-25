#include<iostream>
#include<math.h>

using namespace std;
const int v=567;

int main()
{
	cout<<"HOLA MUNDO\n"<<endl;	
	float a=27,b=1,s,m,r;double d,p,x;int y=1;char f;bool k= false;
	s=a+b;m=a*b;r=a-b;d=a/b;p=pow(a,b);x=sqrt(a*b);
	cout<<s<<" "<<m<<" "<<r<<" "<<d<<" "<<p<<" "<<x<<"\n"<<endl;
	if(a>=b){
		cout<<x<<endl;
	}
	
	while(y<=100){
		cout<<y<<" ";
		if(y%10==0){
			cout<<endl;
		}
		y++;
	}
	if(y!=101){
		k=true;
	}
	else if(y==102){
		y=103;
	}
	else{
		cout<<777<<endl;
	}
	cout<<y<<" "<<k<<endl;
	
	cout<<"introduce letra"<<endl;
	cin>>f;
	switch(f)
	{
		case'a': case'e': case'i':case'o': case'u': 
		        cout<<"es una vocal"<<endl;
		break;  
		default:
				cout<<"es una consonante"<<endl;
	}
	do{
		cout<<y<<endl;
		y++;
	}
	while(y<=102);
	cout<<"     ";
	int g[10][10];
	int h=1,w=0;
	for(int i=1;i<=10;i++){
		
		for(int j=1;j<=10;j++){
			
			g[i][j]=h;
			if(h<=10){
				cout<<g[i][j]<<"  ";
			}
			else{
				cout<<g[i][j]<<" ";
			}
			if(j%10==0){
				cout<<endl<<endl<<"     ";
			}
			w=w+h;
			h++;
		}
		
	}
	cout<<"la suma es: "<<w<<" "<<h-1<<endl;
	return 0;
	
}


