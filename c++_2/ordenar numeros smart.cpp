#include<iostream>

using namespace std;
int n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;

int main()
{
	cout<<"introduze el primer numero: "<<endl;cin>> n0;cout<<"introduze el segundo numero: "<<endl;cin>> n1;
	cout<<"introduze el tercer numero: "<<endl;cin>> n2;cout<<"introduze el cuarto numero: "<<endl;cin>> n3;
	cout<<"introduze el quinto numero: "<<endl;cin>> n4;cout<<"introduze el sexto numero: "<<endl;cin>> n5;
	cout<<"introduze el septimo numero: "<<endl;cin>> n6;cout<<"introduze el octavo numero: "<<endl;cin>> n7;
	cout<<"introduze el noveno numero: "<<endl;cin>> n8;cout<<"introduze el decimo numero: "<<endl;cin>> n9;;
	
	int n[10];
	n[0]=n0;n[1]=n1;n[2]=n2;n[3]=n3;n[4]=n4;n[5]=n5;n[6]=n6;n[7]=n7;n[8]=n8;n[9]=n9;
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			while((n[i]-n[j])>0)
			{
				cout<<i<<endl;
				i++;
			}
			
	    }
	}	
	return 0;
}
