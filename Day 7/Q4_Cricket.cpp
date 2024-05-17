// 4)	Create a base class Cricket. Declare pure virtual function “void play()” in it. 			
// Define following sub classes for this class.                                                 		A) FiftyOver  b) Test  c) TwentyOver	
// “Test” class will have one more function “daywise_summary()”.  
//                                        	Create an array of pointer to “Cricket” class having 3 elements. Store child class objects into this array.
// Now using  using  RTTI , find out where is  “Test”,  and call “daywise_summary()”  along with “play()” function.

#include<iostream>
using namespace std;

class Cricket{
    public:
        virtual void play()=0;
};
class FiftyOver:public Cricket{
     public:
        void play(){
            cout<<"Playing One day match"<<endl;
        }
};
class Test:public Cricket{
    public:
        void play(){
            cout<<"Playing Test Cricket"<<endl;
        }

        void daywise_summary(){
            cout<<"171 runs 3 wickets on day 1"<<endl;
        }
};
class TwentyOver:public Cricket{
     public:
    void play(){
        cout<<"Playing Twenty Over"<<endl;
    };
};

int main(){
    Cricket *Carr[]={new FiftyOver,new TwentyOver,new Test};
    for(int i=0;i<3;i++){
        Test *t=dynamic_cast<Test*>(Carr[i]);
        if(t){
            t->play();
            t->daywise_summary();
        }
    }
 

    return 0;
}