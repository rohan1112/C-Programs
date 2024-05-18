// 4) Write a class template, which can take 3 different type of arguments. Do not define any constructor for this class template.
// class must have 3 setter methods and 3 getter methods.

#include <iostream>
using namespace std;
template <class T1, class T2, class T3> // class template with three types of parameters or arg's
class Base
{
private:
    // Data members with three different data types
    T1 a;
    T2 b;
    T3 c;

public:
    void setFirst(T1 a)
    {
        this->a = a;
    }

    void setSecond(T2 b)
    {
        this->b = b;
    }

    void setThird(T3 c)
    {
        this->c = c;
    }

    T1 getFirst()
    {
        return a;
    }

    T2 getSecond()
    {
        return b;
    }

    T3 getThird()
    {
        return c;
    }
};

int main()
{
    Base<char, int, double> b;
    b.setFirst('A');
    b.setSecond(2);
    b.setThird(8.5);
    cout << "Value of First is\t" << b.getFirst() << endl;
    cout << "Value of Second is\t" << b.getSecond() << endl;
    cout << "Value of Third is\t" << b.getThird() << endl;

    return 0;
}