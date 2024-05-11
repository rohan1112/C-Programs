// 2) 
// class First
// {
// 	int a;
// };
// class Second
// {
// 	public:
// 		void fun1(){}
// 		void fun2(){}
// 		void fun3(){}
// };

// Above code is incomplete.
// Make sure that all the member functions of "Second" will access "a".

#include<iostream>
using namespace std;
class Second;
class First
{
	int a=20;
    public :
    friend class Second;
};
class Second
{
	public:
		void fun1(First &f){
            cout<<"Accesing in fun1 function\t"<<f.a<<endl;
        }
		void fun2(First &f){
            cout<<"Accesing in fun2 function\t"<<f.a<<endl;
        }
		void fun3(First &f){
            cout<<"Accesing in fun3 function\t"<<f.a<<endl;
        }
};
int main(){
    First f;
    Second s;
    s.fun1(f);
    s.fun2(f);
    s.fun3(f);
    return 0;
}
