//Program to demonstrate unary operator overloading by friend function
#include<iostream>
using namespace std;

class me{
    int x,y,z;
    public:
    me(){
        x=y=z=0;
    }

    me(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }

    friend me operator ++(me &o1);
    friend me operator ++(me &o1,int e);
    void display();
};

me operator ++(me &o1){
    o1.x++;
    o1.y++;
    o1.z++;
    return o1;
}

me operator ++(me &o1,int e){
    me temp=o1;
    o1.x++;
    o1.y++;
    o1.z++;
    return temp;
}

void me::display(){
    std::cout<<x<<", ";
    std::cout<<y<<", ";
    std::cout<<z<<"\n";
}

int main()
{
    me m(10,20,30);
    m.display();

    ++m;
    m.display();

    m++;
    m.display();
}