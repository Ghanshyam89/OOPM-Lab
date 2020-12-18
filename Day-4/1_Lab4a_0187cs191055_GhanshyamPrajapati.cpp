#include<iostream>

using namespace std;

class object{
    static int count ;
    public:
    object()
    {
        cout<<"Calling Const\n";
        count++;
    }
    static int showcount()
    {
        return count;
    }
};

int object::count = 0;


int main()
{
    object obj1, obj2, obj3;
    int c;
    c = obj1.showcount();
    cout<<"Total  Niumber of Objects are: "<<c;
    return 0;
}