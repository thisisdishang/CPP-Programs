//Program to demonstrate templates
#include<iostream>
using namespace std;

template<class M>
M add(M x,M y){
    return x+y;
}

int main(){
    int n1=5,n2=20;
    double d1=5.1,d2=6.2;

    int sum1=add(n1,n2);
    double sum2=add(d1,d2);

    std::cout<<"Sum of integers: "<<sum1<<endl;
    std::cout<<"Sum of doubles: "<<sum2<<endl;

    return 0;
}