// 5) Given
// 	void disp(int,int*);
// write a program to define above function and invoke it.

#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    void add(int,int*);
    add(a,&b);
    cout << b<<endl;
}

void add(int a,int *ptr2){
    *ptr2= a+*ptr2;

}

