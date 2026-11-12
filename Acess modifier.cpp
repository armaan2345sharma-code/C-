#include <iostream>
using namespace std;
class Student{
    private:
    int age=23;
    protected:
    int rollNo=90;
    public:
    int HouseNo=67;
    int getAge(){
        return age;
    };
    };
    class Information:public Student{
        public:
        Information(){
            cout<<getAge()<<endl;
            cout<<rollNo<<endl;
            cout<<HouseNo<<endl;
        };
    };
int main() 
{
    Information k;
    return 0;
}