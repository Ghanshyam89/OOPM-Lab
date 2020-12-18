// Identify Class and Object
// WAP to create employee class with data member's id, name, designation and
// emp salary accepting inputs from user and disply employee's data with its salary through object.
// Also define function outside the class.
// Date: 02/11/2020

#include<iostream>

using namespace std;

class Employee
{
    int id;
    char name[10], ch[2];
    char designation[5];
    int empSalaray;

    public: 
        int getdata();
        int display();
};

int Employee ::getdata()
{
    cout<<"Enter the Id of Employee: ";
    cin>>id;
    gets(ch);
    cout<<"Enter the Name: ";
    gets(name);
    cout<<"Eneter the Designation: ";
    gets(designation);
    cout<<"Enter the Employee Salary: ";
    cin>>empSalaray;
} 

int Employee ::display()
{
    cout<<"Id: "<<id<<"\n";
    cout<<"Name: "<<name<<"\n";
    cout<<"Designation: "<<designation<<"\n";
    cout<<"Employee Salary: "<<empSalaray<<"\n";
    cout<<"Employee's Net Salary: "<<empSalaray*12<<"\n";
}

int main()
{
    Employee e1;
    e1.getdata();
    e1.display();
    return 0;
}