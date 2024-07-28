#include <iostream>
using namespace std;

//Abstract Class
class Shape{
public:
virtual double Area() const=0; // Pure virtual function
virtual void Draw() const=0; // Pure virtual function
};

class Circle:public Shape 
{
private:
double radius;

public:

Circle(float r)
{
    this->radius=r;
}

double Area() const override
{
return 3.14159 * this->radius * this->radius;
}

void Draw() const override
{
cout<<"Drawing a Circle with radius:"<<this->radius<<endl;
}

};

class Rectangle:public Shape 
{
private:
double length;
double breadth;

public:

Rectangle(float length,float breadth)
{
    this->length=length;
    this->breadth=breadth;
}

double Area() const override
{
return ((this->length)*(this->breadth));
}

void Draw() const override
{
cout<<"Drawing a Rectangle with length: "<<this->length<<" and breadth: "<<this->breadth<<endl;
}

};
int main()
{
Circle c1(5);
Rectangle r1(10,5);

c1.Draw();
cout<<c1.Area()<<endl;

r1.Draw();
cout<<r1.Area()<<endl;

}
