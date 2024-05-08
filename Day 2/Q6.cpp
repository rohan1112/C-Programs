// 6) write a function to swap 2 given numbers using pointers.

#include<iostream>
using namespace std;

int main(){
    int num1=5,num2=8;
    void swap(int *,int *);
    swap(&num1,&num2);
    cout<<num1<<"\t"<<num2<<endl;

    return 0;
}

void swap(int *ptr1,int *ptr2){
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
