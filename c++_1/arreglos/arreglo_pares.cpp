#include<iostream>
using namespace std;
int arr[100];
int main()
{
	for(int i=0;i<100;i++)
	{
		if((i+1)%2 == 0)
		{			
		arr[i]=i+1;
		cout<<"     arr["<<i<<"] = "<<arr[i]<<endl;	
		}
	}
	return 0;
}
