// Write a program to implement the exception handling with the functionality of testing the throw restrictions.
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
        throw 0;
        z = x / y;
        cout<<"\n"<<x<<"/"<<y<<" = "<<z<<"\n";
    }
    catch(int e)
    {
        cout<<"\nException Invalid division by "<<e<<endl;
    }
    
}