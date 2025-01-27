#include<iostream>
using namespace std;
namespace l1{
  void print(){
    cout<<"hello\n";
  }
};
namespace l2{
   void print(){
     cout<<"world\n";
     }
   };
int main(){
   l1::print();
   l2::print();
   return 0;
 }
