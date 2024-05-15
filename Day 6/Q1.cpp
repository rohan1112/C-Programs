// 1) 
// class course
// {
// };
// class DacCourse:public course
// {
// };
// you should be able to say following
// course *c=new course;
// c->fees(); // course version should be called
// c=new DacCourse;
// c->fees();  // DacCourse version should be called

#include<iostream>
using namespace std;
class course
{
    public:
        virtual void fees(){
            cout<<"Fees of this Course is 50000"<<endl;
        }
};
class DacCourse:public course
{
    public:
        void fees(){
            cout<<"Fees of Dac Course is 100000"<<endl;
        }
};
int main(){
     course *c=new course;
    c->fees(); // course version should be called
    c=new DacCourse; //Upcasting 
    c->fees();  // D
    return 0;
}