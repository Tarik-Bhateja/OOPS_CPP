#include <iostream>
#include <cstring>
using namespace std;
class Shallow {
public:
    char* data;

    Shallow(const char* value) {
        data = new char[strlen(value) + 1];
        strcpy(data, value);
    }

    // Shallow copy constructor
    Shallow(const Shallow& other) {
        data = other.data;
    }


    void printData() const {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Shallow obj1("Hello");
    Shallow obj2 = obj1;  // Shallow copy

    cout << "Before modifying obj2 data:" << endl;
    obj1.printData();
    obj2.printData();

    // Modifying obj2 data will also affect obj1
    obj2.data[0] = 'J';

    cout << "After modifying obj2 data:" << endl;
    obj1.printData();
    obj2.printData();

    return 0;
}
