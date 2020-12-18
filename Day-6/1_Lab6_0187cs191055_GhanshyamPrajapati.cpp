// Lab_6 Create two classes fruit  Attributes of class fruit are ch(char type), num(integer type).
//  Methods o Get_data () and Display_data ().
//  by using “FRIEND” Function
// Date: 11/11/2020

#include<iostream>

using namespace std;

class Fruit{
    
    static int num;
    char ch[20][20];
    public:
    void get_data();
    friend void display_data(Fruit F);
};

int Fruit::num = 1;

void Fruit::get_data() {
    int i;
    cout<<"Enter the Number: ";
    cin>>num;
    for( i = 0; i < num; i++)
    {
        cout<<"Fruit-"<<i+1<<": ";
        cin>>ch[i];
    }
}

void display_data( Fruit F)
{   int i;
    cout<<"Output\n";
    cout<<"Number: "<<F.num<<endl;
    for( i = 0; i < F.num; i++)
    cout<<"Fruits: "<<F.ch[i]<<endl;
}

int main()
{
    Fruit F;
    F.get_data();

    display_data(F);

    return 0;
}