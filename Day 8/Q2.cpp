// 2)write a class template , which can take any generic type display it and return the size of type passed.
// (hint : in this class template write two functions void disp() and int size() ).

#include<iostream>
using namespace std;
template<class T>
class Base{
    private:
        T t;
    public:
        Base(T t){
            this->t=t;
        }
        void disp(){
            cout<<"Given value is\t"<<t<<endl;
        }
        int size(){
            return sizeof(t);
        }
};
int main(){
    Base<int> b(10);
    b.disp();
    cout<<"Size is\t"<<b.size();
    return 0;
}