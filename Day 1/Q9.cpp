// 9) given
// 	int arr[]={10,20,30,40,50}

// write a function which can accept above array inside the pointer and using for loop traverse it.

#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int *ptr=arr;

    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;
    }
    cout<<"--------------"<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<endl;

    }
    cout<<"--------------"<<endl;

    for(int i=0;i<5;i++){
        cout<<*(arr+i)<<endl;

    }
}
