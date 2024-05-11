// 1) class First
//    {
//       char str1[20];
//    };
//    class Second
//    {
//       char str2[20];
//    };
// write a friend function,which will create a  new string containing str1,str2 and also display it.

#include<iostream>
#include <string.h>
using namespace std;
class Second;
class First{
    char str1[20]="First";
    friend void displayName(First&,Second &);
};
class Second{
    char str2[20]="Second";
    friend void displayName(First&,Second&);
};

void displayName(First &f,Second &s){
    char name[strlen(f.str1)+strlen(s.str2)+1];
        int i=0;
        while(f.str1[i]!='\0'){
            name[i]=f.str1[i];
            i++;
        }
        int j=0 ;
        while(s.str2[j]!='\0'){
            name[i]=s.str2[j];
            j++;
            i++;
        }
        name[i]='\0';
    cout<<"By creating new char array : \t"<<name<<endl;

    //By using string concatenation function
    strcat_s(f.str1,strlen(f.str1)+strlen(s.str2)+1,s.str2);
    cout<<"By string concatenation function : \t"<<name<<endl;
}

int main(){
    First f;
    Second s;
    displayName(f,s);
    return 0;
}