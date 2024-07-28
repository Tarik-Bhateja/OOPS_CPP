#include <iostream>
using namespace std;

class A{
    public:
    int weight;

    A(int x=0)
    {
      this->weight=x;
    }

    A operator+(A obj)
    {
        A temp;
        temp.weight=this->weight+obj.weight;
        return temp;
    }
};

int main()
 {
    A p1(70),p2(20);
    A p3;

    p3=p1+p2;

    cout<<p3.weight;

}
