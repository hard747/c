#include<iostream>
using namespace std;

int arr[100];
int main()
{
	for(int j=1;j<=100;j++)
	{
		for(int i=1;i<j-1;i++)
		{
		if(j%i+1 != 0)
		{
			arr[i]=j;
			cout<<"     arr["<<i<<"] = "<<arr[i]<<endl;	
		}
		}
	}
	return 0;
}
