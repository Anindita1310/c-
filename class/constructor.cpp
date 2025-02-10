#include<iostream>
using namespace std;
  class car{
    public:
      string Brand;
      int Launchyear;
      
      //constructor is created
      car(string b,int y){
              Brand=b;
              Launchyear=y;
              cout<<"car object is created "<<endl;
              }
       //function to display the car details
       void display(){
          cout<<"brand:"<<Brand<<endl;
          cout<<"year:"<<Launchyear<<endl;
          }
      };
 int main(){
   
    car c1("tata",2025);
    car c2("toyota",2026);
    c1.display();
    c2.display();
    }
