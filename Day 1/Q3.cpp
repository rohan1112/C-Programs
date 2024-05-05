// 3) accept two numbers and swap them without using third variable.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >>a>>b;
    cout<<"numbers before swapping a= "<<a<<" b= "<<b<<endl;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"numbers after swapping a= "<<a<<" b= "<<b<<endl;

    a=a^b;
    b=a^b;
    a=a^b;
    cout<< a<<endl;
    cout<<b;
}