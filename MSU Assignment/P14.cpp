//Program to demonstrate binary operator overloading by friend function
#include<iostream>
using namespace std;

class complex{
    int r,i;
    public:
    complex(){
        r=i=0;
    }
    
    complex(int x,int y){
        r=x;
        i=y;
    }

    friend complex operator +(const complex &c,const complex &d);

    void display(){
        std::cout<<r<<" + "<<i<<"i"<<endl;
    }
};

complex operator +(const complex &a,const complex &b){
    complex result;
    result.r=a.r+b.r;
    result.i=a.i+b.i;
    return result;
}

int main()
{
    complex n1(5,4),n2(8,5),sum;
    sum=n1+n2;
    n1.display();
    n2.display();
    std::cout<<"Sum is ";
    sum.display();
}