#include <iostream>
using namespace std;

//class Declaration
class House
{
//Access Specifier
public:

//Constructer
House()
{
  cout<<"Constructed New House"<<endl;
}

//Data Members
int length=0;
int breadth=0;

//Member Functions
void setValues(int l,int b)
{
    this->length=l;
    this->breadth=b;
}

int area()
{ 
    return length*breadth;
}

};

int main() 
{
  
//Object Declaration
House h1,h2;
h1.setValues(50,100);
h2.setValues(80,50);

cout<<h1.area()<<endl;
cout<<h2.area()<<endl;
}
