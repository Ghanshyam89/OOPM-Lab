// WAP having 2 classes named as parent, child in which we will override the function named as show()

#include<iostream>

using namespace std;

class Parent{
    public:
    virtual void show(){
        cout<<"This is Parent Class\n";
    }
};
class Child : public Parent{
    public:
    void show(){
        cout<<"This is Child Class\n";
    }
};

int main(){
    Parent *p;
    Child c;
    
    p = &c;
    p->show();
    
    return 0;
}