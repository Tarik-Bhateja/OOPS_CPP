#include <iostream>
using namespace std;

class Phone{
    public:
    string name;
    int ram;
    string processor;
    int battery;

    Phone(string name,int ram,string processor,int battery)
    {
        this->name=name;
        this->battery=battery;
        this->ram=ram;
        this->processor=processor;
    }

    void getDetails()
    {
        cout<<"Name: "<<name<<endl<<"Battery: "<<battery<<endl<<"RAM: "<<ram<<endl<<"Processor: "<<processor<<endl;
    }

};
int main() 
{
Phone p1("Samsung S23",8,"Snapdragon 8 Gen2",3900);
p1.getDetails();
    
}
