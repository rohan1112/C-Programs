// 7) Given following functions:
// 	void disp1(int k);
// 	int disp2(char *);
// 	void disp3();
// 	double* disp4(char ch);

// 	declare "pointer to functions" for the above functions.

#include<iostream>
using namespace std;

int main(){
    void (*ptr)(int);
    int (*ptr1)(char*);
    void (*ptr2)();
    double* (*ptr3) (char);
    void disp1(int k);
	int disp2(char *);
	void disp3();
	double* disp4(char ch);

    ptr=disp1;
    ptr1=disp2;
    ptr2=disp3;
    ptr3=disp4;

    ptr(5);
    char ch='c';
    int a=ptr1(&ch);
    cout<<"ASCII value of char 'c' "<< a<<endl;
    ptr2();
    double *ptr4=ptr3(ch);
    cout<<*ptr4<<endl;
}

void disp1(int k){
    cout<<"Int value "<<k<<endl;;
}
int disp2(char *ch){
    return toascii(*ch);
}
void disp3(){
    cout<<"In display 3"<<endl;
}
double* disp4(char ch){
    double a=5.8;
    double *ptr=&a;
    return ptr;
}