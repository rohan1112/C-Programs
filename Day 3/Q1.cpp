// 1) create a class with constructors and destructors.
// create array of instances and observe how program behaves.

#include<iostream>
#include <string.h>
using namespace std;

class Student{
    int rollNo;
    char* name;

public:
    Student(){
        cout<<"no-arg contructor"<<endl;
    }
    Student(int rollNo,char name[]){
        this->rollNo;
         this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
        cout<<"params Contructor"<<endl;
    }
    ~Student(){
        cout<<"In destructor of "<<rollNo<<"\t"<<name<<endl;
        delete[] name;
    }



};

int main(){
    Student s[3]={Student(01,"Rohan"),Student(02,"Tejas"),Student(03,"Sameer")};
    return 0;
}
