// Write a program to enter a number and find out whether the no. is positive or negative. Throw exception for negative no.
// Dveloped by: Ghanshyam Prajpati
// Date: 04/01/2021

#include<iostream>

using namespace std;

int main()
{
    int x;

    cout<<"\nEnter a Number: ";
    cin>>x;
    
    try
    {
        if(x >= 0)
            cout<<x<<" is Positive Integer\n";
        else
            throw x;
    }
    catch(int e)
    {
        cout<<"\nException: "<<e<<" is Negative Integer\n";
    }
    
}