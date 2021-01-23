

#include<iostream>

using namespace std;

class Person{
    public:
        char code[6];
        char name[20];
        void input(){
            cout<<"Enter the Code: ";
            cin>>code;
            cout<<"Enter the Name: ";
            cin>>name;
        }
        void Display(){
            cout<<"\nCode: "<<code;
            cout<<"\nName: "<<name;
        }
};
class Account : virtual public  Person{
    public:
        float pay;
        void getPay(){
            cout<<"Enter the Salary(in Rs.): ";
            cin>>pay;
        }
        void Display(){
            Person::Display();
            cout<<"\nSalary:  "<<pay;
        }
};
class Admin : virtual public Person{
    public:
        int experience;
        void getExp(){
            cout<<"Enter the Experience(in year): ";
            cin>>experience;
        }
        void Display(){
            cout<<"\nExperience: "<<experience<<" Years";
        }
};
class Master : public Account, public Admin{
    public:
        char companyName[20];
        void getCompname(){
            cout<<"Enter the Company Name: ";
            cin>>companyName;
        }
        void Display(){
            Account::Display();
            Admin::Display();
            cout<<"\nCompany Name: "<<companyName;
            cout<<endl;
        }
};

int main(){
    Master m;
    m.input();
    m.getPay();
    m.getExp();
    m.getCompname();
    m.Display();

    return 0;
}