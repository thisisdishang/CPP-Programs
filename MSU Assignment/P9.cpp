//Program to demonstrate the concept of friend function and friend class
#include<iostream>
using namespace std;

class B; //forward declaration

class A{
    int x;//private data member of base class
    public:
    A():x(10){}
    friend void me(A a0); //friend function declaration
    friend class B; //friend class
};

class B{
    public:
    void me(A a0){
        std::cout<<"Private data member of class A is "<<a0.x<<endl;
    }
};

//friend function definition
void me(A a0){
    std::cout<<"Friend Function Call..."<<endl;
}

int main()
{
    A a1;
    B b1;
    me(a1); //Normal function call
    b1.me(a1); //Friend function call
}