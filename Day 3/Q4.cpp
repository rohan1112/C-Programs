// 4) create a class.
// accept from user, how many instances are required.
// Accordingly create array of instances dynamically.
// Now make sure that u call destructor for each and every instances.

#include<iostream>
#include <string.h>
using namespace std;

class Student{
    int rollNo;
public:
    Student(){
        cout<<"no-arg contructor"<<endl;
    }
    Student(int rollNo,char name[]){
        this->rollNo;
        cout<<"params Contructor"<<endl;
    }
    ~Student(){
        cout<<"In destructor of "<<endl;
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

