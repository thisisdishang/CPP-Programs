//Program to demonstrate different type of type casting operations
#include<iostream>
using namespace std;

int main(){
    int n1=10;
    double n2=n1; //Implicit casting

    double n3=12.5;
    int n4=int(n3); //Explicit casting

    std::cout<<"Implicit Type Casting: "<<n2<<endl;
    std::cout<<"Explicit Type Casting: "<<n4<<endl;

    return 0;
}