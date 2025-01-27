#include<iostream>

using namespace std;
class Box{
    private:
    double length;
    double breadth;
    double height;
    
    public:
     //setter method
     void insertDetails(double l,double b,double h);
     double calculateVol();
        
     
};
void Box::insertDetails(double l,double b,double h){
     length=l;
     breadth=b;
     height=h;
     }
     double Box::calculateVol(){
        return length*breadth*height;
     }
int main(){
   Box box1;//object for class box
   Box box2;
   double volume=0.0;
   double l,b,h;
   
  /* box1.height=5.0;
   box1.length=12.0;
   box1.width=4.0;*/
   
   /*//box2 details
   box2.height=8.0;
   box2.length=4.0;
   box2.width=5.6;*/
   cout<<"enter the length,width,height of a box"<<endl;
   cin>>l>>b>>h;
   
   box1.insertDetails(l,b,h);
   volume=box1.calculateVol();
   cout<<"Volume is"<<volume<<endl;
   
   
   return 0;
   
   
}
