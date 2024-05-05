// 11) accept a name ,display it. Now change first and the last characters of the name with their next characters and again print it.
// e.g
// 	name is "sachin"
// 		output should be "tachio"

#include<iostream>
using namespace std;

int main(){
    char ch[20];
    gets(ch);
    cout<<ch<<endl;
    char *ptr=ch;
    ++ptr[0];
    // cout<<*ptr<<endl;
    int i;
    for(i=0;ch[i]!='\0';i++){
    }
    ++ptr[i-1];
    // cout<<*ptr<<endl;
    for(i=0;ch[i]!='\0';i++){
        cout<<*(ptr++);
    }

}

