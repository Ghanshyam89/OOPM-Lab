#include<iostream>
#include<string.h>
using namespace std;
#define max 10

class Student{
    static int unique_Id ;
    char name[20];
    int co_number;
    char address[50];

    public:
    void get_data()
    {
        cout<<"\n Enter the Student's Name: ";
        cin>>name;
        cout<<" Enter the Residential Address: ";
        cin>>address;
        cout<<" Enter the Contact Number: ";
        cin>>co_number;
        cin.ignore();

        unique_Id++;
    }
    void display()
    {
        cout<<"\n Name: "<<name;
        cout<<"\n ID: "<<unique_Id;
        cout<<"\n Contact Number: "<<co_number;
        cout<<"\n Residential Address: "<<address;
    }

};

int Student::unique_Id = 1000;


int main()
{
    Student student[10];
    int n;
    cout<<"\nEnter Number Students: ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        cout<<"\n-----------------------------\n";
        cout<<"Enter Student"<<i+1<<"\'s"<<" Details";
        cout<<"\n-----------------------------\n";
        student[i].get_data();

        cout<<"\n-----------------------------";
        cout<<"\nDetails of Student "<<i+1<<"\n";
        cout<<"-----------------------------\n";
        student[i].display();
        cout<<"\n-----------------------------\n";
    }
    
    return 0;
}