#include <iostream>
using namespace std;
class student{
    public:
    //constructor without parameter
    student(){
        cout<<"welcome to the world"<<endl;
    }
    //constructor with parameter
    student(int ad){
        cout<<"welome "<<ad<<endl;
    }
    //function 
    void K2(){
        cout<<"mohit rathor"<<endl;
    }
};

int main() 
{   student jky;
    jky.K2();
    student mh(23);

    
    return 0;
}