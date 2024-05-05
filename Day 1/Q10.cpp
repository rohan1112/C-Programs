// 10) given
// 	char name[20]="Computer"
	
// 	now declare a pointer to the above string and increment the pointer in such a way that when you display the string using pointer, it should display "puter"

#include<iostream>
using namespace std;

int main(){
    char name[20]="Computer";
    char *ptr=name;
    ptr+=3; //We have to increment pointer by as character only takes 1 byte of space
    for(int i=0;name[i]!='\0';i++){
        cout<<*(ptr+i);
    }
}
