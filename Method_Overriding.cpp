#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() const
{
        cout << "Some generic animal sound" << endl;
}
};

class Dog : public Animal {
public:
    void makeSound() const override 
{
        cout << "Bark" << endl;
}
};

class Cat : public Animal 
{
public:
    void makeSound() const override 
{
        cout << "Meow" << endl;
}
};

int main() 
{
    Animal* animal1 = new Dog();
    Animal* animal2 = new Cat();

    animal1->makeSound(); // Outputs: Bark
    animal2->makeSound(); // Outputs: Meow

    delete animal1;
    delete animal2;

    return 0;
}