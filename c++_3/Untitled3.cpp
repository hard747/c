#include<iostream>

using namespace std;

void ordena(int &x,int &y)
		{
		if(x<y)
		{
			int tmp =x;
			x=y;
			y=tmp;
		}
	}

int main()
{
	
	int a,b;
        cout<<"introdusca numeros"<<endl;	
		cin >> a >> b;
	    ordena(a,b);
			
	cin.get();
	return 0;
    }
