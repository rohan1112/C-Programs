// 6) define a function template which can take any type of pointer as an argument and by dereferencing it , display the data. Now overload this function template, for int pointer.
// Call these functions (function templates and normal function) from main by passing address of various different variables.

#include <iostream>
using namespace std;
template <class T>
void Sample(T *t)
{
    cout << "Value at pointer pointing to is\t" << *t << endl;
}
void Sample(int *t) // Overload the function template specifically for int pointers
{
    cout << "\nIn int pointer function template " << endl;
    cout << "Value at pointer pointing to is\t" << *t << endl;
}

int main()
{
    char a = 'A';
    double b = 6.3;
    int c = 20;

    Sample(&a);
    Sample(&b);
    Sample(&c); // invoking overloaded function with int pointer
    return 0;
}