// 2) create a class with constructors and destructor.
// create 2 instances on stack and 1 instance on heap. observe the invocation of constructors and destructors.

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
   Student s[2]={Student(01,"Rohan"),Student(02,"Tejas")};
   Student *s3=new Student(03,"Sameer");
   delete s3; //We have to explicitly called destructor of object which is created on the heap
    return 0;
   
}