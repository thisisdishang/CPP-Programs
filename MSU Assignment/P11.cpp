//Program to demonstrate unary operator overloading by member function
#include<iostream>
using namespace std;

class unaryMinus{
    int num;
    public:
    unaryMinus(){
        num=0;
    }

    unaryMinus(int x){
        num=x;
    }

    /*The minus operator ( – ) changes the sign of its argument. A positive number becomes negative, 
    and a negative number becomes positive*/
    unaryMinus operator -(){
        return unaryMinus(-num);
    }

    void print(){
        std::cout<<"Number is : "<<num<<endl;
    }
};

int main(){
    unaryMinus a1(-20),a2(15);
    
    //operator overloaded here
    unaryMinus x = -a1; 
    x.print();

    unaryMinus y = -a2;
    y.print();
}