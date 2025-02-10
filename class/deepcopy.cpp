#include <iostream>
using namespace std;

class DeepCopy {
public:
    int *ptr;

    // Constructor
    DeepCopy(int i) {
        ptr = new int; // Allocate memory
        *ptr = i;      // Assign value
    }

    // Copy Constructor
    DeepCopy(const DeepCopy &obj) { // Corrected class name
        ptr = new int; // Allocate new memory
        *ptr = *obj.ptr; // Copy the value from the source
    }

    // Destructor
    ~DeepCopy() {
        delete ptr; // Free allocated memory
    }
};

int main() {
    DeepCopy obj1(14);
    DeepCopy obj2 = obj1; // Calls the copy constructor

    cout << "Object 1 value: " << *obj1.ptr << " Address: " << obj1.ptr << endl;
    cout << "Object 2 value: " << *obj2.ptr << " Address: " << obj2.ptr << endl;

    return 0;
}
