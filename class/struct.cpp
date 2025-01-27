#include<iostream>
using namespace std;
struct Ba{
   String accholder;
   float balance;
   
   void insertHoldername(String name){
      accholder=name;
    }
   
   void insertAmt(float bal){
      balance=bal;
   }
   void deposit(float amt){
     if(amt>0){
         balance+=amt;
         cout<<"deposited balance"<<amt<<"balance in acc:"<<balance<<endl;
      }
      else{
          cout<<"Invalid amt"<<endl;
      }
   }
   
   void withdraw(float amt){
      if(amt>0 && amt<balance)
      {
        balance=amt;
      }
      else{
        cout<< "No money available"<<endl
       }
       
   }
   void accountDetails(){
      cout<<"Account holder"<<accholder<<endl;
      cout<<"balance"<<balance<<endl;
    }
    };
    int main(){
     Ba acc1;
     acc1.insertHolderName("somanth");
     acc1.insertAmt(600);  
     acc1.deposit(100);
     
     
     }
