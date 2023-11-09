//Program to demonstrate virtual function
#include<iostream>
using namespace std;

class round{
    public:
    virtual void print(){
        std::cout<<"A round shape"<<endl;
    }
};

class square:public round{
    public:
    void print(){
        std::cout<<"A square shape"<<endl;
    }
};

int main(){
    round *s1 = new square;

    //Virtual function, binded at runtime
    s1->print();
    round s2;

    //Non-virtual function, binded at compile time
    s2.print();
}