// 8) write a function which can accept minimum 3 characters and maximum 5 characters and display them. ( use "default arguments")

#include<iostream>
#include <string.h>
using namespace std;

int main(){
    void dispCharacters(char*);
    char str[20];
    cout << "Enter characters "<<endl;
    cin >> str;
    dispCharacters(str);
    return 0;
}

void dispCharacters(char *str){
    if(strlen(str)>=3 && strlen(str)<=5){
        cout<<str;
    }else{
        cout<<"Character length is less than 3 or greater than 5";
    }
}