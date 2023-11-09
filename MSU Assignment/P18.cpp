//Program to demonstrate abstract class
#include<iostream>
using namespace std;

//A class is abstract if it has at least one pure virtual function
class hello{
    public:
    //pure virtual function
    virtual void display()=0;
};

class me:public hello{
    public:
    void display(){
        std::cout<<"Hello World"<<endl;
    }
};

int main()
{
    me m1;
    m1.display();
    return 0;
}