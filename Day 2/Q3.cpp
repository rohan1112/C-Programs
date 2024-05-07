// 3) create a structure "Employee" 
// with members 
// 	int id
// 	char name[20];
// 	char desig[20];
// now access it using
// a) array 
// b) DMA

#include<iostream>
using namespace std;

struct Employee{
	int id;
	char name[20];
	char desig[20];
};

int main(){
    struct Employee arr[2];

    //Using Array
    for(int i=0;i<2;i++){
        puts("Enter your id");
        cin>>arr[i].id;
        puts("Enter your name");
        cin>>arr[i].name;
        puts("Enter your desig");
        cin>>arr[i].desig;
    }

    for(int i=0;i<2;i++){
        cout<<"your id"<<arr[i].id<<" name "<<arr[i].name<<" desig "<<arr[i].desig<<endl;
    }
    return 0;

    //Using DMA
    int count;
    cout<<"How many employee you want to store";
    cin>>count;
    struct Employee *EmpArr=new Employee[count];
    for(int i=0;i<count;i++){
        puts("Enter your id");
        cin>>EmpArr[i].id;
        puts("Enter your name");
        cin>>EmpArr[i].name;
        puts("Enter your desig");
        cin>>EmpArr[i].desig;
    }

    for(int i=0;i<count;i++){
        cout<<"your id"<<EmpArr[i].id<<" name "<<EmpArr[i].name<<" desig "<<EmpArr[i].desig<<endl;
    }
}
