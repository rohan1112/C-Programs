// 5) Define a class with constructor and  member function

// 	create object, call member function
// 	now create a reference to that object, and using that reference try to call member function

#include<iostream>
using namespace std;

class First{
    int num;
    public:
        First(int k){
            this->num=k;
        }

        void disp(){
            cout<<"The num is\t"<<num<<endl;;
        }

};
int main(){
    First f(10);
    cout<<"Calling function using object"<<endl;
    f.disp();
    cout<<"Calling function using reference"<<endl;
    First &ref=f;
    ref.disp();
    
    return 0;
}