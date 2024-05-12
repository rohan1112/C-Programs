// 2)write a number class with
// int num;
// void disp(){}
// u should be able to do following
// number n1(20);
// int k=-n1;
// n1+=5;
// n1.disp()
// number n2(35);
// if(n1!=n2)
// {
// 	some message
// }
// number n3(12);
// if(n3 < n1)
// {
// 	some message
// }
// number n4;
// n4=n2*n3;

#include<iostream>
using namespace std;

class Number{
    int num;
    public:
        Number(){

        }
        Number(int n){
            this->num=n;
        }
        void disp(){
            cout<<"Number is : "<<num<<endl;;
        }
        int getNumber(){
            return num;
        }

        int operator-(){
            return (-num);
        }
        void operator+=(int k){
            num+=k;
        }

        bool operator!=(Number &ref){
            return (num!=ref.num);
        }

        bool operator<(Number &ref){
            return (num<ref.num);
        }

        Number operator*(Number& ref){
            return Number(num*ref.num);
        }
};


int main(){
    Number n1(20);
    int k=-n1; //Internal Implementation n1.operator-();
    n1+=5; //Internal Implementation n1.operator(5);
    n1.disp();

    Number n2(35);
    if(n1!=n2) //Internal Implementation n1.operator!=(n2);
    {
        cout<<"Numbers "<<n1.getNumber()<<" and "<<n2.getNumber()<<" are not equals"<<endl;
    }

    Number n3(12);
    if(n3 < n1) //Internal Implementation n3.operator<(n1);
    {
        cout<<n3.getNumber()<<" is smaller than "<<n2.getNumber()<<endl;
    }

    Number n4;
    n4=n2*n3; //Internal Implementation n2.operator*(n3);
    n4.disp();
    return 0;
}