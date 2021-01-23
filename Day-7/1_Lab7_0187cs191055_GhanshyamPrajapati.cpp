//WAP to create a class named Complex. 
//Take complex numbers by using default constructor and display in proper format(10+20i)
//Date: 17/11/2020

#include<iostream>

using namespace std;

class Complex{
    public: 
        int real;
        int img;
        
        Complex()
        {
            real = 0;
            img = 0;
        }
        Complex(int a, int b)
        {
            real = a;
            img = b;
        }
        void display_data()
        {
            if(img < 0)
            {   
                if(img == -1)
                    cout<<real<<"-1";
                else
                    cout<<real<<img<<"i";

            }else if(img == 1)
            {
                cout<<real<<"+1";
            }else{
                cout<<real<<"+"<<img<<"i";
            }
            
        }
};

int main()
{
    Complex r, c1(10,-9), c2(23,3);
    r.real = c1.real+c2.real;
    r.img = c1.img+c2.img;
    cout<<endl;
    r.display_data();
    cout<<endl;
    return 0;
}