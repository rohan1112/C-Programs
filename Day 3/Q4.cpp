// 4) create a class.
// accept from user, how many instances are required.
// Accordingly create array of instances dynamically.
// Now make sure that u call destructor for each and every instances.

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
    void disp(){
        cout<<"indisp"<<endl;
    }
};
int main(){
    int cnt;
    cout<<"How many students you want to add "<<endl;
    cin>>cnt;
    Student* s=new Student[cnt];
     for (int i = 0; i < cnt; i++) {
        s[i].disp();
    }
    delete[] s;
    return 0;
}

