/* Lab_18 WAP to execute a program in C++
to create a class called DATE with methods to accept two valid dates in the form dd/mm/yy and to implement the following operations
by overloading the operators + and -. After every operation, the results  are to be displayed by overloading the operator <<.
i. no_of_days = d1 – d2; where d1 and d2 are DATE objects, d1 >=d2 and no_of_days is an integer. 
ii. d2 = d1 + no_of_days; where d1 is a DATE object and no_of_days is an integer.
*/

#include <iostream>

using namespace std;

class DATE
{
    int dd, mm, yy;
    public:
    DATE() // Reseting Data...
    {
        dd = 0;
        mm = 0;
        yy = 0;
    }
    DATE(int dd, int mm, int yy)
    {
        this->dd = dd;
        this->mm = mm;
        this->yy = yy;
    }
    bool operator>=(const DATE &d)
    {
        if (this->dd >= d.dd)
        {
            return true;
        }
        return false;
    }
    int operator-(const DATE &b)
    {
        return (this->dd - b.dd);
    }
    DATE operator+(const int &b)
    {
        return DATE(this->dd + b, this->mm, this->yy);
    }
    friend ostream &operator<<(ostream &output, const DATE &D)
    {
        output << D.dd
        << ":"
        << D.mm
        << ":"
        << D.mm
        << endl;
        return output;
    }
    friend istream &operator>>(istream &input, DATE &D)
    {
        input >> D.dd >> D.mm >> D.yy;
        return input;
    }
};

int main(int argc, char const **argv)
{
    DATE d1 = DATE(2, 3, 10);
    DATE d2 = DATE(1, 2, 11);
    int no_of_days;
    
    if (d1 >= d2)
    {
    no_of_days = d1 - d2;
    cout << no_of_days
    <<endl;
    }
    else
    {
    cout << "Exception : d1 < d2."<<endl;
    }
    d2 = d1 + no_of_days; 
    cout << d2; 
    return 0;
}