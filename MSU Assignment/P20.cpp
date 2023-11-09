//Program to demonstrate static data member and member function
#include<iostream>
using namespace std;

class me{
    public:
    static int count;//static data member
    int num;
    me(){
        count++;
    }

    //static member function
    static void printCount(){
        std::cout<<"Count = "<<count<<endl;
    }
};

//initialize static data member
int me::count=0;

int main(){
    me m1;
    std::cout<<"Static member function called through object:-"<<endl;
    m1.printCount(); //through object   
    std::cout<<"Static member function called through class:-"<<endl;
    me::printCount(); //through class
}