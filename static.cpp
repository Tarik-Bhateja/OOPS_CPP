#include <iostream>

class Counter {
public:
    static int count;

    Counter() {
        count++;
    }
};

int Counter::count = 0; // Initialize static member

int main() {
    Counter c1;
    Counter c2;

    std::cout << "Count: " << Counter::count << std::endl; // Output will be 2

    return 0;
}
