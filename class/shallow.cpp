#include <iostream>
using namespace std;

class ShallowCopy {
public:
    int *ptr;

    // Constructor
    ShallowCopy(int i) {
        ptr = new int; // Allocate memory
        *ptr = i;      // Assign value
    }

    

    // Destructor
    ~ShallowCopy() {
        delete ptr; // Free allocated memory
    }
};

int main() {
    ShallowCopy obj1(13);
    ShallowCopy obj2 = obj1; // Calls the copy constructor

    cout << "Object 1 value: " << *obj1.ptr << " Address: " << obj1.ptr << endl;
    cout << "Object 2 value: " << *obj2.ptr << " Address: " << obj2.ptr << endl;

    return 0;
}
