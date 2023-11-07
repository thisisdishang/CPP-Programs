//Program to demonstrate the concept of single inheritance
#include<iostream>
using namespace std;

class father{
    int body;//private data member can not inherited
    public:
    int money;
};

//inherit property from father class
class son:public father{
    public:
    int smoney;
};

int main()
{
    son s1;
    s1.smoney=500;
    s1.money=10000;
    std::cout<<"Son money is "<<s1.smoney<<endl;
    std::cout<<"Father money is "<<s1.money<<" which is inherited."<<endl;
    return 0;
}