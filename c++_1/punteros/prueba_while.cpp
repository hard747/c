#include<iostream>
using namespace std;
int arr[100];
int main()
{
	int k=0;
	for(int j=2;j<=100;j++)
	{
	bool band =true;
	for(int i=2;i<j;i++)
	{
		if(j%i == 0)
		{
			band = false;
			break;
		}
	}
	if(band == true)
	{
		arr[k] = j;
		cout<<"arr["<<k+1<<"] = "<<arr[k]<<endl;
		k++;
	}
	}
	return 0;
}
