// 1) Write a class (not a class template) and inside it create a function template as a member function. Invoke it from main function.

#include<iostream>
using namespace std;
class Math{
    public:
        template<class T>
        void add(T a,T b){
            cout<<"Addition is\t" <<a+b<<endl;
        }
};
int main(){
    Math m;
    m.add(5,10);
    return 0;
}