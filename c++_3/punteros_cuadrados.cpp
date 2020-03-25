#include<iostream>

using namespace std;
int *ptr;
int main()
{
	system("color 0A");
	int arr[]={4,5,6,7,8,9};
	ptr=arr;
	for(int i=0;i<6;i++)
	{
		*ptr=*(ptr+i);
		if(i%2 != 0)
		{
			cout<<(*ptr)*(*ptr)<<endl;
		}	
	}
	return 0;
}
