// 1) class Hour
// {
// 	private:
// 		int hr;
// 	public:
// 		parameterized constructor
// 		disp method
// }
// class Minute
// {
// 	private:
// 		int mnt;
// 	public:
// 		parameterized constructor
// 		disp method
// }
// write a program to convert minutes to hours.
// (Use operator= for conversion.)

#include<iostream>
using namespace std;
class Minute;
class Hour
{
	private:
		int hr;
	public:
		Hour(int k){
            this->hr=k;
        }
		void disp(){
            cout<<"After converting minutes to hour : "<<hr<<endl;
        }
        int operator=(Minute&);     
};
class Minute
{
	private:
		int mnt;
	public:
		Minute(int k){
            this->mnt=k;
        }
		void disp(){
           cout<<"Given Minutes : "<<mnt<<endl;
        }
        int getMinute(){
            return mnt;
        }
};
int Hour::operator=(Minute& ref){
    return (this->hr=ref.getMinute()/60);
}
int main(){
    Hour h(1);
    Minute m(180);
    cout<<"Given Minutes : "<<m.getMinute()<<endl;
    h=m; //internal representation h.operator=(m);
    h.disp();
    
}