#include<iostream>
using namespace std;
int arr[100];
int main()
{
	for(int i=0;i<100;i++)
	{
		arr[i]=i+1;
		cout<<"     arr["<<i<<"] = "<<arr[i]<<endl;	
	}
	return 0;
}
