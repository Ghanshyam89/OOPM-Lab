// Lab 8: Create a class ABC intialize any new object values by existing object values by  using "copy Constructor".
// Date: 18/11/2020
// Developed by: Ghanshyam Prajapati

#include<iostream>

using namespace std;

class Abc{
    public:
        int x, y;

        Abc(int a, int b)
        {
            x = a;
            y = b;
        }
        
        Abc(Abc &abc)
        {
            x = abc.x;
            y = abc.y;
        }
};

int main()
{
    Abc abc1(4,3);
    Abc abc2(abc1);
    cout<<"ABC1.x = "<<abc1.x<<"    ABC1.y = "<<abc1.y<<"\n";
    cout<<"ABC2.x = "<<abc2.x<<"    ABC2.y = "<<abc2.y<<"\n";

    return 0;
}