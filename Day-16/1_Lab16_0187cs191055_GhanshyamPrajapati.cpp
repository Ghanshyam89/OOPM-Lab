// Function Overloading, Operator Overloading.

#include<iostream>

using namespace std;

class DisplayOverloading{
    public:
        void Display(){
            cout<<"\n1. Non-Parameterized Display Function\n";
        }
        void Display(int num){
            cout<<"\n2. Parameterized Display funtion with Integer num;\n Num: "<<num<<"\n";
        }
        void Display(char name[]){
            cout<<"\n3. Parameterized Display funtion with character name;\n Name: "<<name<<"\n";
        }
        void Display(int num1, float num2){
            cout<<"\n4. Integer Num1: "<<num1<<"\n";
            cout<<"   Float Num2: "<<num2<<"\n";
        }
        void Display(float num1, int num2){
            cout<<"\n5. Float Num1: "<<num1<<"\n";
            cout<<"   Integer Num2: "<<num2<<"\n";
        }
};

int main()
{
    DisplayOverloading display;
    display.Display();
    display.Display(20);
    char name[] = "Character";
    display.Display(name);
    display.Display(20, 89.45);
    display.Display(89.45, 20);

    return 0;
}