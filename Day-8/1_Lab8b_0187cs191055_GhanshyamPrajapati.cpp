// WAP to create a class Demo with attributes x, y. 
// Take values for Attributes by using parameterized constructor 
// and display the values by using show() method.
// Date: 18/11/2020
// Developed by: Ghanshyam Prajapati

#include<iostream>

using namespace std;

class Demo{
    public:
        int x, y;

        Demo(int a, int b)
        {
            x = a;
            y = b;
        }
        void show()
        {
            cout<<"X = "<<x<<"    Y = "<<y<<"\n";
        }
};

int main()
{
    Demo d1(4,3);
    d1.show();

    return 0;
}

