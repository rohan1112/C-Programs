// 5) create a class, define different types of constructors. in main create n number of objects. At the end display how many constructors are created for a class.

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
    Student(Student &ref){
        this->rollNo=ref.rollNo;
        this->name = new char[strlen(ref.name) + 1];
        strcpy(this->name, ref.name);
        cout<<"In copy constructor"<<endl;

    }
    ~Student(){
        cout<<"In destructor of "<<rollNo<<"\t"<<name<<endl;
        delete[] name;
    }
    void disp(){
        cout<<"indisp"<<endl;
    }
};
int main(){
    
    Student s;
    Student s1(01,"Akshay");
    Student* s2=new Student();
    Student* s3=new Student(02,"Rohit");
    Student s4=s1; 

    delete s2;
    delete s3;

    return 0;
}