//Program to demonstrate inline function
#include<iostream>
using namespace std;

inline int cube(int a){
    return a*a*a;
}

int main(){
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    int result=cube(n);
    std::cout<<"Cube of "<<n<<" is "<<result;
    return 0;
}