#include <iostream>
using namespace std;
class student{
    private:
    int RollNO;
    string Name;
    public:
    void setRoll(int r){
        RollNO=r;
        };
    void setName(string name){
        Name=name;
    };
    int getRoll(){
        return RollNO;
    };
    string getNme(){
        return Name;
    };
    
};
int main() 
{
    student S1;
    S1.setRoll(12);
    S1.setName("Radha");
    cout<<"name:"<<S1.getNme()<<endl;
    cout<<"roll:"<<S1.getRoll()<<endl;
    return 0;
}