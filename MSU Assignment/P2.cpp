//Program to demonstrate the concept of default arguments in a function
#include<iostream>
using namespace std;

//here second parameter take 1 as default argument
int multi(int x,int y=1){
    return x*y;
}

int main()
{
    int result;
    result=multi(5,5);
    std::cout<<"Multiplication with argument is "<<result<<endl;
    result=multi(4);
    std::cout<<"Multiplication with no second argument is "<<result<<endl;
    return 0;
}
