//Program to demonstrate the concept of class and object
#include<iostream>
using namespace std;

//class of me
class me{
    int i;//private data member & can't access outside the class
    public:
    int k;
    void print(){
        std::cout<<"Value of K:"<<k<<endl;
    }
};

int main()
{
    me d;//create object of class me
    d.k=7;
    d.print();
    return 0;
}