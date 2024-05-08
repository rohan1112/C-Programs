// 5) given
// 	void disp(int); function.
// now create a function pointer and call this function using function pointer.

#include<iostream>
using namespace std;

int main(){
    void disp(int); //Function Declaration
    void (*ptr)(int); //Funtion Pointer
    ptr=disp; //Assigning function to pointer
    ptr(10); //Invoking function through pointer 

    return 0;
}

void disp(int num){
    cout<<num<<endl;
}