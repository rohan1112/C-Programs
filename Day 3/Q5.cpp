// 5) create a class, define different types of constructors. in main create n number of objects. At the end display how many constructors are created for a class.

#include<iostream>
#include <string.h>
using namespace std;

class Student{
    char* name;
    int rollNo;
    static int cnt;
public:
    Student(){
        name=NULL;
        cout<<"no-arg contructor"<<endl;
        cnt++;

    }
    Student(int rollNo,const char* str){
        this->rollNo=rollNo;
        name = new char[strlen(str) + 1];
        strcpy_s(name,strlen(name) + 1, str);
        cout<<"params Contructor"<<endl;
        cnt++;
    }
    Student(const Student &ref){
        this->rollNo=ref.rollNo;
        name = new char[strlen(ref.name) + 1];
        strcpy_s(name,strlen(ref.name) + 1, ref.name);
        cout<<"In copy constructor"<<endl;
        cnt++;

    }
    ~Student(){
        delete[] name;
        cnt--;
        cout<<"In destructor of "<<rollNo<<endl;
    }
    static int getCount(){
        return cnt;
    }
    void disp(){
        cout<<"indisp"<<endl;
    }
};
int Student::cnt=0;
int main(){
    
    Student s;
    Student s1(1,"Akshay");
    Student* s2=new Student();
    Student* s3=new Student(2,"Rohit");
    Student s4=s1; 
    cout<<"Count "<<Student::getCount()<<endl;

    delete s2;
    delete s3;
    cout<<"Count "<<Student::getCount()<<endl;

    return 0;
}