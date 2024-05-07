// ask user how many numbers he would like to store and using DMA allocate the memory for the same

#include<iostream>
using namespace std;

int main(){
    int input;
    cout << "Enter how many nimbers do you want to store ? :"<<endl;
    cin >> input;
    int* arr=new int[input];
    for(int i=0;i<input;i++){
        cin>>arr[i];
    }
    cout<< "The numbers are "<<endl;
     for(int i=0;i<input;i++){
        cout<<arr[i]<<"\t";
    }
}