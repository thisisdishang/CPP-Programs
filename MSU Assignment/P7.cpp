//Program to demonstrate the concept of hybrid inheritance
#include<iostream>
using namespace std;

class ceo{
    public:
    void displayX(){
        std::cout<<"From Class CEO"<<endl;
    }
};

class manager1:public ceo{
    public:
     void displayY(){
        std::cout<<"From Class Manager 1"<<endl;
    }
};

class manager2:public ceo{
    public:
     void displayZ(){
        std::cout<<"From Class Manager 2"<<endl;
    }
};

class employee:public manager1,public manager2{
    public:
    void displayE(){
        std::cout<<"From Class Employee"<<endl;
    }
};

int main(){
    employee e1;
    e1.displayE();
    e1.displayY();
    e1.displayZ();
    
    manager1 m1;
    m1.displayX();
    return 0;
}