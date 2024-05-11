// 3) Given
// class Module1
// {
// 	int duration;
// 	public:
// 		Module1(int k)
// 		{
// 			duration=k;
// 		}
// };

// class Module2
// {
// 	int duration;
// 	public:
// 		Module2(int k)
// 		{
// 			duration=k;
// 		}
// };			
// write a global function "check" which will take 2 modules (i.e. Module1 and Module2 ) and check whether Modules are same or not.
// call this "check" function from main function.	

#include<iostream>
using namespace std;
class Module2;
class Module1
{
	int duration;
	public:
		Module1(int k)
		{
			duration=k;
		}
        friend bool Check(Module1& ,Module2&  );
};

class Module2
{
	int duration;
	public:
		Module2(int k)
		{
			duration=k;
		}
        friend bool Check(Module1& ,Module2& );
};	

bool Check(Module1& ref1,Module2& ref2 ){
    if(ref1.duration==ref2.duration){
        return true;
    }else{
        return false;
    }
}
int main(){
    Module1 m1(20);
    Module2 m2(20);
    bool result=Check(m1,m2);
    result?cout<<"Objects are same ":cout<<"Objects are not same"<<endl;;

    return 0;
}