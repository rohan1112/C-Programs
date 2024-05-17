// 5)	Create a base class “StorageDevice”.Declare  pure virtual function             “void store()” in it.  										Define following sub classes for this class. 									A) HardDisk b) CD c) PenDrive.			
// define  “store()” in these classes.
// now write a global function "perform()" which will accept "StorageDevice class reference" as an argument. In this function using RTTI invoke  "store()" method of  only “PenDrive”. [ handle bad_cast exception ]
// From main function try to call “perform()” function by passing various child classes.

#include<iostream>
using namespace std;

class StorageDevice{
    public:
        virtual void store()=0;
};
class HardDisk:public StorageDevice{
     public:
        void store(){
            cout<<"Storing data in HardDisk"<<endl;
        }
};
class CD:public StorageDevice{
     public:
        void store(){
            cout<<"Storing data in CD"<<endl;
        }
};
class PenDrive:public StorageDevice{
    public:
        void store(){
            cout<<"Storing data in PenDrive"<<endl;
        }
};

void perform(StorageDevice& ref){
    try{
        PenDrive& pd=dynamic_cast<PenDrive&>(ref);
        pd.store();
    }catch(bad_cast& r){
        cout<<"Bad Casting"<<endl;
    }

}

int main(){
    HardDisk HD;
    CD cd;
    PenDrive pd;
    perform(HD);
    perform(cd);
    perform(pd);
    return 0;
}
