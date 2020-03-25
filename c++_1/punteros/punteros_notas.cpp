#include<iostream>
using namespace std;
int *ptr;
int main()
{
	system("color 0A");
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"introdusca la nota del alumno "<<i+1<<endl;
		cin>>arr[i];
	}
	ptr=arr;
	cout<<"la nota de que alumno desea conocer."<<endl<<"    alumno: ";
	int n;
	cin>>n;
	cout<<endl<<"la nota del alumno "<<n<<" es: "<<*(ptr+n-1)<<endl;
	return 0;
}
