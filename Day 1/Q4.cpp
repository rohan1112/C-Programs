// 4) write "Call By Address" program [ using pointer ]

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    void add(int*,int*);
    add(&a,&b);
    cout << a<<endl;
}

void add(int *ptr1,int *ptr2){
    *ptr1= *ptr1+*ptr2;
}

