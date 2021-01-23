// Write a program to find x/y, where x and y are given from the keyboard and both are integers.
// Developed by: Ghanshyam Prajpati
// Date: 04/02/2021

#include<iostream>

using namespace std;

int main(){
    float x, y, z;

    cout<<"\nEnter the value x: ";
    cin>>x;
    cout<<"\nEnter the value y: ";
    cin>>y;

    try
    {
        if(y == 0)
        z = x / y;
        cout<<"\n"<<x<<"/"<<y<<" = "<<z<<"\n";
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }   
}