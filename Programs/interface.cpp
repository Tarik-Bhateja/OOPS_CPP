#include <iostream>

class Interface {
public:
    virtual void method1() = 0; //Pure Virtual
    virtual void method2() = 0; //Pure Virtual
};

class Implementation : public Interface {
public:
    void method1() override {
        std::cout << "Method1 implementation." << std::endl;
    }

    void method2() override {
        std::cout << "Method2 implementation." << std::endl;
    }
};

int main() {
    Implementation obj;
    obj.method1();
    obj.method2();

    return 0;
}
