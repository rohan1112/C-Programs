// 1) class Number
//    {
//        int num;
//    }
// In the main function,
// Number n1(8),n2(4),n3(20),n4(6),n5;
// n5=n1-n2
// n5=n3/n4;
// n5=n1*n3

#include<iostream>
using namespace std;
class Number
{
    private:
       int num;
    public:
       Number(){

       }
       Number(int n){
        this->num=n;
       }

       int getNum(){
        return num;
       }

       Number operator-(Number &ref){
            return Number(num-ref.num);
       }

       Number operator/(Number &ref){
            return Number(num/ref.num);
       }

       Number operator*(Number &ref){
            return Number(num*ref.num);
       }
};
int main(){
    Number n1(8),n2(4),n3(20),n4(6),n5;
    n5=n1-n2; //internal representation n1.operator-(n2);
    cout<<"Subtraction is\t"<<n5.getNum()<<endl;
    n5=n3/n4; //internal representation n3.operator/(n4);
    cout<<"Division is\t"<<n5.getNum()<<endl;
    n5=n1*n3; //internal representation n3.operator*(n4);
    cout<<"Multiplication is\t"<<n5.getNum()<<endl;
    return 0;
}