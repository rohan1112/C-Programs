// 4) Define a class , write two member functions 
// 	void disp1(){ //some code }
// 	void disp2(){ // some code }

// 	Try to call disp1   from    disp2.

#include<iostream>
using namespace std;

class First{
    public:
        void disp1(){
            cout<<"In disp1"<<endl;
        }
        void disp2(){
            disp1();
            cout<<"In disp2"<<endl;
        }
};

int main(){
    First f;
    f.disp2();
    return 0;
}