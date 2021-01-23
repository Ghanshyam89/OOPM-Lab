// Lab-24 Write a program to enter a number and find out whether the no. is prime or not. Also perform exception handling.

#include<iostream>

using namespace std;

int main()
{
    int x, flag = 0;
    cout<<"Enter the number: ";
    cin>>x;

    for (int i = 2; i < x/2; i++)
    {
        if (x % i == 0)
        {
            flag = 1;
        }        
    }
    
    try
    {
        if (x < 0)
        {
            cout<<'\n'<<x<<" is Negative Integer!";
        }
        else if (x == 1)
        {
            throw 2341;
        }
        else if (x == 2)
        {
            cout<<'\n'<<x<<" is Prime!";
        }
        else if (!flag)
        {
            cout<<'\n'<<x<<" is Prime!";
        }
        else
        {
            throw 2342;
        }
    }
    catch(int y)
    {
        cout<<"\nException number: "<<y;
        cout<<'\n'<<x<<" is not Prime";
    }
    cout<<endl;
    return 0;
}