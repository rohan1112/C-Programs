// 1) store value 20 inside "num" variable.
// create a pointer to this variable. print the value of "num" using pointer.
// increment the pointer by 2 and show with the diagram what happens.
#include <iostream>
using namespace std;

int main(){
    int num=20;
    int *ptr;
    ptr=&num;

    cout << *ptr <<endl;

    ptr=ptr+2; 
    //It will point to a memory location which will give a garbage value
    //Incrementing or decrementing pointer depends the size of data type the pointer points to 
    //In this case it will be calculated as let ptr memory address be 1000 then 
    //ptr=1000+(2*4) int data type is of 4 bytes

    cout << *ptr << endl;
}