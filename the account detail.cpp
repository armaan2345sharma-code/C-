#include <iostream>
using namespace std;
class Data{
  int balance;
  int accountNo;
  public:
  void setBalance(int a,int b){
    balance=a;
    accountNo=b;
  };
  void getbalance(){
    cout<<"balance is"<<balance<<endl;
    cout<<"account no. is "<<accountNo<<endl;
  };

};
int main() 
{
    Data S1;
    S1.setBalance(68,76666);
    S1.getbalance();
    
    return 0;
}