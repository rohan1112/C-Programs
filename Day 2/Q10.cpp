// 10)define 3 different structures and initialize their members.
// now write 3 different functions,but with the same name.
// these functions will accept each structure respectively and display their members.

#include<iostream>
using namespace std;

struct Student{
    int rollNo=1;
    char name[20]="Yash";
};
struct Employee{
    int eid=1001;
    char name[20]="Pratik";
};
struct Account{
    double accid=20000000652456;
    char accType[30]="Saving";
};

int main(){
    void disp(Student);
    void disp(Employee);
    void disp(Account);
    Student s;
    Employee e;
    Account a;
    disp(s);
    disp(e);
    disp(a);

    return 0;
}

void disp(Student s){
    cout<<s.rollNo<<"\t"<<s.name<<endl;
}
void disp(Employee e){
    cout<<e.eid<<"\t"<<e.name<<endl;

}
void disp(Account a){
    cout<<a.accid<<"\t"<<a.accType<<endl;

}