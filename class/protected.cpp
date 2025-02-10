#include<iostream>
using namespace std;

class Box {
  protected:
    double width;
};

class SmallBox : public Box { 
  public:
    void setWidth(double width); 
    double getWidth();           // corrected method name
};

void SmallBox::setWidth(double w) {
    width = w; // corrected to set the width
}

double SmallBox::getWidth() {
    return width; // corrected return statement
}

int main() {
    SmallBox box;
    box.setWidth(5.0); // corrected method call
    cout << box.getWidth() << endl; // corrected method call
    return 0;
}
