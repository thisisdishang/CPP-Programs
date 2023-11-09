//Program to demonstrate binary operator overloading by member function
#include<iostream>
using namespace std;

class sum{
    int x,y;
    public:
    void input(){
        std::cout<<"Enter two number: ";
        std::cin>>x>>y;
    }

    sum operator +(sum s){
        sum s1;
        s1.x=x+s.x;
        s1.y=y+s.y;
        return s1;
    }

    void display(){
        std::cout<<x<<" + "<<y<<"i"<<"\n";
    }
};

int main()
{
    sum s1,s2,ans;
    s1.input();
    s2.input();
    ans=s1+s2;
    std::cout<<"Entered values are:\n";
    std::cout<<"\t";
    s1.display();
    std::cout<<"\t";
    s2.display();
    std::cout<<"Total is ";
    ans.display();
    return 0;
}