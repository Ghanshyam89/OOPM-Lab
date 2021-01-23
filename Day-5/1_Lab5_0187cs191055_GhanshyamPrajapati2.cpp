#include<iostream>
#include<string.h>
using namespace std;

class Student{
    static int unique_Id ;
    char name[20];
    int co_number;
    char address[50];

    public:
    void get_data()
    {
        int i;
        char ch[2];
        
        cout<<"\nEnter the Student's Name: ";
        gets(name);
        cout<<"Enter the Contact Number: ";
        cin>>co_number;
        cout<<"Enter the Residential Address: ";
        gets(address);
        gets(ch);
        unique_Id++;
        
    }
    void display()
    {
        cout<<"\nName: "<<name;
        cout<<"\nID: "<<unique_Id;
        cout<<"\nContact Number: "<<co_number;
        cout<<"\nResidential Address: "<<address;
    }

};

int Student::unique_Id = 1000;


int main()
{
    Student student1;

    student1.get_data();
    cout<<"\n----Student 1 Details----\n\n";
    student1.display();

    Student student2;
    student2.get_data();
    cout<<"\n----Student 2 Details----\n\n";
    student2.display();
    
    Student student3;
    student3.get_data();
    cout<<"\n----Student 3 Details----\n\n";
    student3.display();
    
    return 0;
}