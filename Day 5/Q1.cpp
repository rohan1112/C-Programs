// 1)
// class base
// {
// 	public:
// 		base(char *ptr)
// 		{
// 		}
// };
// class sub:public base
// {
// };
// Following statements should be possible
// sub s;
// sub *s1=new sub(40);
// sub *s2=new sub('a',4.5);

#include<iostream>
using namespace std;
class base
{
	public:
		base(char *ptr)
		{
		}
};
class sub:public base
{
    char ch='A';
    public :
        sub():base(&ch){

        }
        sub(int k):base(&ch){

        }
        sub(char c,double k):base(&c){

        }
};
int main(){
    sub s;
    sub *s1=new sub(40);
    sub *s2=new sub('a',4.5);
    return 0;
}