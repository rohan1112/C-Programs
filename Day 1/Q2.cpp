// 2) accept two numbers from the user and with the help of pointers perform following arithmetic operations:
// 	+   -    *   /

#include<iostream>
using namespace std;

int main(){
    int num1, num2;
    cin >> num1 >> num2;
    
    int *ptr1=&num1;
    int *ptr2=&num2;

    cout<<"Addition is "<<*ptr1+*ptr2<<endl;
    cout<<"Subtracion is "<<*ptr1 - *ptr2<<endl;
    cout<<"Multiplication is "<<*ptr1 * *ptr2<<endl;
    cout<<"Division is "<<*ptr1 / *ptr2<<endl;
}