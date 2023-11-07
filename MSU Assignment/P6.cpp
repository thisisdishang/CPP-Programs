//Program to demonstrate the concept of hierarchical inheritance
#include<iostream>
using namespace std;

class dean{
    public:
    int deanVal;
};

class hod1:public dean{
    public:
    int hod1Val;
};

class hod2:public dean{
    public:
    int hod2Val;
};

class employee1:public hod1{
    public:
    int emp1Val;
};

class employee2:public hod2{
    public:
    int emp2Val;
};

int main(){
    employee1 e1;
    e1.emp1Val=100;
    e1.hod1Val=450;

    hod1 h1;
    h1.deanVal=90;

    std::cout<<"Employee 1 Value "<<e1.emp1Val<<endl;
    std::cout<<"HOD 1 Value "<<e1.hod1Val<<endl;
    std::cout<<"Dean Value "<<h1.deanVal<<endl;

    return 0;
}