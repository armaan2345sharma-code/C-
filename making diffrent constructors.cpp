#include <iostream>
using namespace std;
class student{
    private:
    int roll;
    string name;
    public:
    float marks;
    string address;

    student(int a,string k){
        roll=a;
        name=k;
        cout<<"roll Number:-"<<roll<<endl;
        cout<<"name:-"<<name<<endl;
    }

    student(string kl,float nm){
        marks=nm;
        address=kl;
        cout<<"Marks is :"<<marks<<endl;
        cout<<"address is:"<<address<<endl;
    }

};
int main() 
{
  student m(23,"Amaan Sharma");
  student km("Vill kuathroo",56);
    return 0;
}