// 9)write a function which takes 3 arguments
// variable, pointer and a reference.(any datatype)
// invoke this function and show how "call by value","call by address" and "call by reference" will work.

#include<iostream>
using namespace std;

int main(){
    void showDisp(int ,int*, int&);
    int a,b,c;
    a=10;
    b=20;
    c=30;
    showDisp(a,&b,c);
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    return 0;
}

void showDisp(int a,int* b, int &ref){
    a=60; //this is a local copy
    *b=50; //call by address change the original value;
    ref=80; //ref is just a alias for a variable it can change value of original variable
}