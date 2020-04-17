#include<iostream>
#include <stdlib.h>

void function_1(int value){
 std::cout << "function scope:\t" << & value << '\n' << std::endl;
}
void function_2(int & reference){
 std::cout << "function scope:\t" << & reference << '\n' << std::endl;
}
void function_3(int * pointer){
 std::cout << "function scope:\t" << pointer << '\n' << std::endl;
}
void function_4(int *& pointer_reference){
 std::cout << "function scope:\t" << pointer_reference << '\n' << std::endl;
}

void mod_pointer_1(int * pointer){
 std::cout << "function scope, before mod the position: " << pointer << std::endl;
 pointer = new int;
 std::cout << "function scope, after mod the position: " << pointer << std::endl;
}

void mod_pointer_2(int * pointer){
 std::cout << "function scope, before mod the value: " << * pointer << std::endl;
 * pointer = 5;
 std::cout << "function scope, after mod the value: " << * pointer << std::endl;
}

void mod_pointer_3(int *& pointer){
 std::cout << "function scope, before mod the position: " << pointer << std::endl;
 pointer = new int;
 std::cout << "function scope, after mod the position: " << pointer << std::endl;
}

int main(int argc, char * argv[]){ // std::cout << std::endl; 
 int number = 0, *pointer = new int;
 
 
 std::cout << "function 1\na value is required, a variable is given\nmain scope:\t" << &number << std::endl;
 function_1(number);
 
 std::cout << "function 2\na reference is required, a variable is given\nmain scope:\t" << &number << std::endl;
 function_2(number);
 
 std::cout << "function 3\na pointer is required, a reference is given\nmain scope:\t" << &number << std::endl;
 function_3(&number);
 
 std::cout << "function 3\na pointer is required, a pointer is given\nmain scope:\t" << pointer << std::endl;
 function_3(pointer);
 
 std::cout << "function 4\na pointer & reference is required, a pointer is given\nmain scope:\t" << pointer << std::endl;
 function_4(pointer);
 
 // POINTERS
 std::cout << "the pointers consist of two operable elements:\n1. the indicated memory location (pointer)\n2. the value in the position (* pointer)" << '\n' << std::endl;
 
 std::cout << "function mod 1\na pointer is required, a pointer is given\nmain scope: " << pointer << std::endl;
 mod_pointer_1(pointer);
 std::cout << "main scope, after mod function: " << pointer << '\n' << std::endl;
 
 std::cout << "function mod 2\na pointer is required, a pointer is given\nmain scope: " << * pointer << std::endl;
 mod_pointer_2(pointer);
 std::cout << "main scope, after mod function: " << * pointer << '\n' << std::endl;
 
 std::cout << "function mod 3\na pointer & reference is required, a pointer is given\nmain scope: " << pointer << std::endl;
 mod_pointer_3(pointer);
 std::cout << "main scope, after mod function: " << pointer << '\n' << std::endl;
 
 return 0;
}
