// 2) 
// Create a base class FourWheeler. Declare pure virtual function “void start()” in it. 			
// Define following sub classes for this class. 
// A) Qualis b) Sumo c) Volvo 					
// Define “start” function in these classes.			In main function , create array of pointer to FourWheeler which will contain objects of these three sub classes. 
// Now traverse the array and call all the child class methods.

#include<iostream>
using namespace std;
class Fourwheeler{
    public:
    Fourwheeler(){
        cout<<"In Fourwheeler constructor"<<endl;
    }
    virtual void start()=0;
};
class Qualis:public Fourwheeler{
        void start(){
            cout<<"Starting Qualis"<<endl;
        }
};
class Sumo:public Fourwheeler{
        void start(){
            cout<<"Starting Sumo"<<endl;
        }
};
class Volvo:public Fourwheeler{
    void start(){
        cout<<"Starting Volvo"<<endl;
    }
};
int main(){
    Fourwheeler *farr[3];//Array of pointers of fourwheeler
    farr[0]=new Qualis;
    farr[1]=new Sumo;
    farr[2]=new Volvo;

    for(int i=0;i<3;i++){
        farr[i]->start();
    }
    return 0;
}