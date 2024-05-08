// 7) accept from user how many chracters he has in his name, now allocate a memory accordingly and accept his name. [use new operator]

#include<iostream>
#include <sec_api/string_s.h>
using namespace std;

int main(){
    int input;
    cout << "Enter how many characters do you have in your name? :"<<endl;
    cout << "Enter your name: "<<endl;

    cin >> input;
    char* name=new char[input+1];
    cin>>name;
    cout<<"Your name is "<< name;
}