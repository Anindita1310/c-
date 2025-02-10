#include<iostream>

using namespace std;

class unsPointers{
    public:
    	int *ptr;
    unsPointers(int i){
        ptr=new int;
        *ptr=i;
    }
    void print(){
    	cout<<"value:"<<*ptr<<endl;
    	cout<<"address:"<<ptr<<endl;
    	cout<<"address:"<<&ptr<<endl;
    	cout<<"value:"<<*(&ptr)<<endl;
    	cout<<"value:"<<**(&ptr)<<endl;
    }
    ~unsPointers(){
      delete ptr;
    }
};
int main(){
   unsPointers obj1(10);
   obj1.print();
}
