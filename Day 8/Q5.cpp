// 5) define a class "Emp" with "private int data=100"
// write a function template,which can accept anything as an argument and display it.
// It can also accept "Emp" class object as an argument and display it
// ( Hint:- insertion operator overloading )

#include <iostream>
using namespace std;

class Emp
{
private:
    int data = 100;

public:
    template <class T>
    void disp(T t)
    {
        cout << "Value is\t" << t << endl;
    }
    friend ostream &operator<<(ostream &, Emp &);
};
ostream &operator<<(ostream &o, Emp &e)
{
    o << e.data;
    return o;
}

int main()
{
    Emp e;
    e.disp(10);
    e.disp('A');
    cout << "Passing object of emp to function template" << endl;
    e.disp(e);
    return 0;
}