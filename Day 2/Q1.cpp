// 1) using cin and cout, accept name,address,age of a person and print it.

#include<iostream>
using namespace std;

int main(){
    char name[20];
    char address[40];
    int age;
    cout<< "Enter You Name"<<endl;
    cin >>name;
    cout<< "Enter You address"<<endl;
    cin >>address;
    cout<< "Enter You age"<<endl;
    cin >> age;

    cout<<"Your name is "<<name<<" you are from "<<address<<" and your age is "<<age<<endl;

    return 0;
}