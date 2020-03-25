#include<iostream>
using namespace std;

//char *ptr;
int main()
{
	system("color 0A");
	//char fras[]={'h','o','l','a',' ','p','e','r','u'};
	char *cad="youtube";
	for(int i=0;i<7;i++)
	{
	cout<<*(cad+i);
	}
	//ptr=fras;
	/*for(int i=0;i<9;i++)
	{
	cout<<*(ptr+i)<<" ";
	}*/
	//*ptr++=3;
	//cout<<endl<<*ptr<<endl;
	return 0;
}
