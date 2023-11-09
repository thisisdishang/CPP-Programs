//Program to demonstrate the different types of constructors and destructor
#include<iostream>
using namespace std;

class A{
    public:
    int m;

    A(){
        std::cout<<"Default constructor called..."<<endl;
        m=0;
    }

    A(int n){
        std::cout<<"Parameterized constructor called..."<<endl;
        m=n;
    }

    ~A(){
        std::cout<<"Destructor called..."<<endl;
    }
};

int main()
{
    A a1,a2(24);
    std::cout<<"Data member of first object is "<<a1.m<<endl;
    std::cout<<"Data member of second object is "<<a2.m<<endl;
    return 0;
}