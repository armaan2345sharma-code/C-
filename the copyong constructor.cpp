#include <iostream>
using namespace std;
class sample{
    int RollNo;
    string name;
    public:
    sample(int a,string k){
        RollNo=a;
        name=k;
    };
    sample(const sample &s){
        name=s.name;
        RollNo=s.RollNo;
        cout<<"name and RollNo \n"<<name<<"     "<<RollNo<<endl;
    };
};

int main() 
{  
    sample k(23,"Armaan Sharma");
    sample k2=k;


    
    return 0;
}