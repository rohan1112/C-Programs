// 3) create a class Person with "void walk()" method and "walks normally" statement inside it. Now derive a class "Athelite" from Person and redefine "void walk()" with a statement "walks faster". In the main function create an instance of "Athelite" and invoke "walk()" method. Observe what happens.

#include<iostream>
using namespace std;
class Person{
    public:
        void walk(){
            cout<<"Walks Normally"<<endl;
        }
};
class Athelite:public Person{
    public:
        void walk(){
            cout<<"Walks Faster"<<endl;
        }
};
int main(){
    Athelite ath;
    ath.walk();
    return 0;
}
