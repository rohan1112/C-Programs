// 3) Write a class template, which can take 3 different type of arguments and print them.
// a class must have only one constructor and that is a constructor which will take 3 arguments.
// class must have disp function which will display the data.

#include<iostream>
using namespace std;
template<class T1,class T2,class T3> //class template with three types of parameters or arg's
class Base{
    private: 
        //Data members with three different data types
        T1 a;
        T2 b;
        T3 c;
    public:
        Base(T1 a,T2 b,T3 c){
            this->a=a;
            this->b=b;
            this->c=c;
        }
        //function to display values of data members
        void disp(){
            cout<<"Values are\t"<<a<<"\t"<<b<<"\t"<<c<<endl;
        }
};

int main(){
    Base<char,int,double> b('A',2,8.5);
    b.disp();

    return 0;
}