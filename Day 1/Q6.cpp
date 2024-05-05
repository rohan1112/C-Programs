#include<iostream>
using namespace std;

int main(){
    int num = 100;
    int* ptr = &num;
    ++(*ptr); //value will be incremented by 1
    cout << num << endl;
    (*ptr)++; //value will be incremented by 1
    cout << num << endl;
    *(ptr++); //value will not get changed but pointer will address to another memory block
    cout << num << endl;
}
