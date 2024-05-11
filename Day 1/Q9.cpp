// 9) given
// 	int arr[]={10,20,30,40,50}

// write a function which can accept above array inside the pointer and using for loop traverse it.

#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int cnt=5;
    void printArray(int*,int);
    printArray(arr,cnt);
}

void printArray(int *arr,int cnt){
    for(int i=0;i<cnt;i++){
        cout<<arr[i]<<" ";
        // or
        // cout<<*(arr+i)<<" ";

    }
}
