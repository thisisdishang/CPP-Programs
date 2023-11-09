//Program to demonstrate reading data from file and writing data to file
#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    fstream ob;

    ob.open("firstfile.txt",ios::out); //opening file in writing mode
    ob<<"Hello World\n"; //writing data to file
    ob<<"This is my first file handling";
    ob.close(); //closing the file

    ob.open("firstfile.txt",ios::in); //opening file in reading mode
    while (!ob.eof())
    {
        string str;
        ob>>str; //reading word by word from file and storing in str
        std::cout<<str<<"\t"; //printing str
    }
    ob.close(); //closing the file
    return 0;
}