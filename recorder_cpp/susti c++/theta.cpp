#include <iostream>
using namespace std;
void f (int val, int& ref) {
val++;
ref=ref+100;
}
main (){
int i=10;
int j=10;
f(i,j);
cout << "i vale " << i << " y j " << j << endl;
}
