#include <iostream>
#include <cstring>
using namespace std;
class Deep {
public:
    char* data;

    Deep(const char* value) {
        data = new char[strlen(value) + 1];
        strcpy(data, value);
    }

    // Deep copy constructor
    Deep(const Deep& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    ~Deep() {
        delete[] data;
    }

    void printData() const {
        cout << "Data: " << data << endl;
    }
};

int main() {
    Deep obj1("Hello");
    Deep obj2 = obj1;  // Deep copy

    cout << "Before modifying obj2 data:" << endl;
    obj1.printData();
    obj2.printData();

    // Modifying obj2 data will not affect obj1
    obj2.data[0] = 'J';

    cout << "After modifying obj2 data:" << endl;
    obj1.printData();
    obj2.printData();

    return 0;
}
