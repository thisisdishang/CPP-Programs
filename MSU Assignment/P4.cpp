//Program to demonstrate the concept of multiple inheritance
#include<iostream>
using namespace std;

class father{
    public:
    void eyes(){
        std::cout<<"Son eyes like father"<<endl;
    }
};

class mother{
    public:
    void face(){
        std::cout<<"Son face like mother"<<endl;
    }
};

//inherit property from mother and father class
class son:public father,public mother{
    public:
    void body(){
        std::cout<<"Son own body"<<endl;
    }
};

int main()
{
    son s;
    s.body();
    s.eyes();
    s.face();
    return 0;
}