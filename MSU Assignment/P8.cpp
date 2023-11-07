//Program to demonstrate the concept of function overloading
#include<iostream>
using namespace std;

class sum{
    public:
    int add(int a,int b){
        return a+b;
    }
    float add(float x,float y){
        return x+y;
    }
};

int main()
{
    sum s;
    int result;
    result=s.add(5,5);
    std::cout<<"Integer Result = "<<result<<endl;
    float result2;
    result2=s.add(5.5f,3.2f);
    std::cout<<"Float Result = "<<result2<<endl;
    return 0;
}