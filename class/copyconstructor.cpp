#include<iostream>
using namespace std;

class Line {
public:
    int getLength();
    Line(int len);               // Simple constructor
    Line(const Line &obj);        // Copy constructor
    ~Line();                      // Destructor

private:
    int* ptr;
};

Line::Line(int len) {
    cout << "Normal constructor allocating ptr" << endl;
    ptr = new int;                // Allocate memory for ptr
    *ptr = len;                   // Initialize the value pointed to by ptr
}

Line::Line(const Line &obj) {
    cout << "Copy constructor allocating ptr" << endl;
    ptr = new int;                // Allocate new memory for ptr
    *ptr = *obj.ptr;              // Copy the value from the other object's ptr
}

Line::~Line() {
    cout << "Free the memory" << endl;
    delete ptr;                   // Free the dynamically allocated memory
}

int Line::getLength(void) {
    return *ptr;                  // Return the value stored in ptr
}

void display(Line obj) {
    cout << "Length of line: " << obj.getLength() << endl;
}

int main() {
    Line line(10);                 // Create a Line object with a length of 10
    display(line);                 // Display the length of the line
    return 0;
}
