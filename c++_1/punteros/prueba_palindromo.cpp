#include<iostream>
using namespace std;

string *ptr;
int main()
{
	system("color 0A");
	string palindromo = "AEREA";
    ptr = palindromo;
	cout<< *ptr;
	cout<<endl<<endl;
	ptr+=1;
	cout<<*ptr;
	return 0;
}
