#include <iostream>
using namespace std;
class ElectrucityBill{
public:
int calculateBill(int units,int perUnit,int fixedCharges){
    return (units*perUnit+fixedCharges);
}

};

int main() 
{
  
 ElectrucityBill k;
 cout<<k.calculateBill(12,2,100)<<endl;
    
    return 0;
}