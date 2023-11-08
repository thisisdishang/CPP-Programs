//Program to demonstrate the concept of function overriding
#include<iostream>
using namespace std;

class X{
    public:
    void display(){
        std::cout<<"Class A display..."<<endl;
    }
};

class Y:public X{
    public:
    void display(){
        std::cout<<"Class B display..."<<endl;
    }
};

int main()
{
    X x;
    Y y;
    x.display();
    y.display();
    //using scope resolution operator we can access base class property with derived class object
    y.X::display();
    return 0;
}