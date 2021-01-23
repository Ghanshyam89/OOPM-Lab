
#include<iostream>

using namespace std;

class Base{
    public:
        int a;
        
        void get_a(){
            cout<<"Enter value of a: ";
            cin>>a;
        }
};
class D1 : virtual public Base{
    public:
        int b;
        
        void get_b(){
            cout<<"Enter value of b: ";
            cin>>b;
        }
};
class D2 : virtual public Base{
    public:
        int c;
       
        void get_c(){
            cout<<"Enter value of c: ";
            cin>>c;
        }
};
class D3  : public D1, public D2{
    public:
        int total;

        void calculate(){
            total = a + b + c;
            cout<<"Total: "<<total;
            cout<<endl;
        }
};
int main(){
    D3 d;
    d.get_a();
    d.get_b();
    d.get_c();
    d.calculate();

    return 0;
}