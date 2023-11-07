//Program to demonstrate the concept of multilevel inheritance
#include<iostream>
using namespace std;

class A{
    public:
    int x;
};

//inherit property from class A
class B:public A{
    public:
    int y;
};

//inherit property from class B
class C:public B{
    public:
    int z;
};

int main()
{
    C c1;
    c1.x=85;
    c1.y=86;
    c1.z=87;
    std::cout<<"Value of clas A's X is : "<<c1.x<<endl;
    std::cout<<"Value of clas B's Y is : "<<c1.y<<endl;
    std::cout<<"Value of clas C's Z is : "<<c1.z<<endl;
    return 0;
}