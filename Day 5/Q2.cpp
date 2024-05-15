// 2) 
// class parent
// {
// 	public:
// 		disp1()
// 		disp2()
// 		disp3()
// 		disp4()
// };
// class sub:private parent
// {
// 	public:
// 		disp5()
// };
// make sure u can do the following
// sub s(30);
// s.disp5();
// s.disp3();
// s.disp1();

#include<iostream>
using namespace std;
class parent
{
	public:
		void disp1(){
            cout<<"In display disp 1"<<endl;
        }
		void disp2(){
            cout<<"In display disp 2"<<endl;
        }
		void disp3(){
            cout<<"In display disp 3"<<endl;
        }
		void disp4(){
            cout<<"In display disp 4"<<endl;
        }
};
class sub:private parent
{
    int a;
	public:
        sub(int k){
            a=k;
        }
		void disp5(){
            cout<<"In display 5"<<endl;
        }
        using parent::disp3;
        using parent::disp1;
};
int main(){
    sub s(30);
    s.disp5();
    s.disp3();
    s.disp1();
    return 0;
}