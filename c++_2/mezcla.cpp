/*#include<iostream>
using namespace std;

int i,j,n,t;
int min;
int main()
{
	system("color 0A");	
	cout<<"introdusca la cantidad de elementos"<<endl;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++)
	{
		cout<<"introdusca el elemento "<<i+1<<endl;
		cin>>num[i];
	}
	cout<<endl<<endl;
	cout<<"los elementos son: "<<endl;
	for(int i=0; i<n ;i++)
	
			cout<<"      "<<num[i]<<" ";
		
	cout<<endl<<endl;
		cout<<"la primera lista es: "<<endl<<endl;
		for(int i=0;i<n/2;i++)
		{
			cout<<num[i]<<"  ";
		}
		cout<<endl<<"la segunda lista es: "<<endl<<endl;
		for(int i=n/2;i<n;i++)
		{
			cout<<num[i]<<"  ";
		}	
	
	return 0;
}
*/
#include <iostream>
using namespace std;

void merge(int a[], int low, int high, int mid,int n)
{
    int i, j, k, c[n];
    i = low;
    k = low;
    j = mid + 1;
    while (i <= mid && j <= high)
    {
        if (a[i] < a[j])
        {
            c[k] = a[i];
            k++;
            i++;
        }
        else
        {
            c[k] = a[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j <= high)
    {
        c[k] = a[j];
        k++;
        j++;
    }
    for (i = low; i < k; i++)
    {
        a[i] = c[i];
    }
}

void mergesort(int a[], int low, int high,int n)
{
    int mid;
    if (low < high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid,n);
        mergesort(a,mid+1,high,n);
        merge(a,low,high,mid,n);
    }
}

int main()
{
	cout<<"introdusca la cantidad de elementos"<<endl;
	int n;
	cin>>n;
    int a[n], b[n];
    //cout<<"introdusca los elementos"<<endl;
    for (int i = 0; i < n; i++)
    {
    	cout<<"introdusca el elemento"<<i+1<<endl;
        cin>>a[i];
    }
    mergesort(a, 0, n-1,n);
    cout<<"los elementos ordenados son: "<<endl<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<"  ";
    }
    /*cout<<"introdusca los elementos";
    for (i = 0; i < 5; i++)
    {
    	cout<<endl<<endl<<"introdusca el elemento"<<i+1<<endl;
        cin>>b[i];
    }
    mergesort(b, 0, 4);
    cout<<"los elementos ordenados son: "<<endl;
    for (i = 0; i < 5; i++)
    {
        cout<<b[i]<<"  ";
    }*/
    return 0;
}
