// 2) create following structure
// struct book
// {
// 	char bid[5];
// 	char name[30];
// 	int price;
// };
// ask user how many records he wants to create and accordingly allocate memory.
// accept values from user and display.
// ( Hint :-  use  "new" operator)

#include<iostream>
using namespace std;

struct book
{
	char bid[5];
	char name[30];
	int price;
};
int main(){
    int count;
    cout<< "How many books you want to store?"<<endl;
    cin >>count;
    struct book *ptr=new book[count];

    for(int i=0;i<count;i++){
        cout<<"Enter id :";
        cin>>ptr[i].bid;
        cout<<"Enter Name :";
        cin>>ptr[i].name;
        cout<<"Enter Price :";
        cin>>ptr[i].price;
    }
    for(int i=0;i<count;i++){
        cout<<"Id "<<ptr[i].bid;
        cout<<" Name "<<ptr[i].name;
        cout<<" Price "<<ptr[i].price<<endl;
    }
    return 0;
}
