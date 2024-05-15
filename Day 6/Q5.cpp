// 5) create an abstract class Shape with
// 	virtual void display()
// 	{
// 		cout<<"display on the canvas"<<endl;
// 	}
// 	and
// 	pure virtual function (contract) void draw() 
// functions.
// now derive 3 classes from Shape
// 	Circle,Triangle and Rectangle
// in the main function create array of pointer to Shape class and store all the child class objects addresses inside it. Traverse the array and invoke "display()" and "draw()" functions.

#include<iostream>
using namespace std;
class Shape{
    public:
        virtual void display()
        {
            cout<<"display on the canvas"<<endl;
        }
        virtual void draw()=0;
};
class Circle:public Shape{
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};
class Triangle:public Shape{
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};
class Rectangle:public Shape{
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};
int main(){
    Shape *shapeArr[3]={new Circle,new Triangle,new Rectangle};
    for (int i = 0; i < 3; i++)
    {
        shapeArr[i]->display();
        shapeArr[i]->draw();
    }
    
    return 0;
}
