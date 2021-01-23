// Lab 14 Create 4 classes person, student, faculty and grades.
// The person class has data members such as id, name. Create student, faculty by inheriting the person class. 
// The faculty class inherited has data members representing the id and salary of faculty.
// Display the grades by inheriting the student, faculty. Write a program to model this relationship.

// Developed by: Ghanshyam Prajapati
// Date: 13/12/2020

#include<iostream>

using namespace std;

class Person{
    public:
        int id;
        char name[20];
};
class Student : public Person{
    public:
        int sub1, sub2, sub3, sub4, sub5, total;
        void get_infos()
        {
            cout<<"Enter the ID: ";
            cin>>id;
            cout<<"Enter the Name: ";
            cin>>name;
    
            cout<<"Enter the Marks for\n";
            cout<<"English: ";
            cin>>sub1;
            cout<<"Hindi: ";
            cin>>sub2;
            cout<<"Mathematics: ";
            cin>>sub3;
            cout<<"Physics: ";
            cin>>sub4;
            cout<<"Chemistry: ";
            cin>>sub5;

            total = ((sub1 + sub2 + sub3 + sub4 + sub5)*100)/300;
        }
        void print_infos()
        {
            cout<<"\nStudent Id: "<<id;
            cout<<"\nStudent Name: "<<name<<"\n";
            
            if(total > 80)
                cout<<"Grade: A";
            else if(total > 60)
                cout<<"Grade: B";
            else if(total > 40)
                cout<<"Grade: C";
            else 
                cout<<"Grade: D";
            cout<<endl;
        }
};
class Faculty : public Person{
    public:
        float salary;
        void get_infof(){
            cout<<"Enter the ID: ";
            cin>>id;  
            cout<<"Enter the Name: ";
            cin>>name;
            cout<<"Enter the Salary: ";
            cin>>salary;
        }
        void print_infof()
        {
            cout<<"\nFaculty Id: "<<id;
            cout<<"\nFaculty Name: "<<name;
            cout<<"\nFaculty Salary: "<<salary;
            cout<<endl;
        }
};
class Grades : public Student, public Faculty{
    public:
        char ch;
        void Display()
        {
            cout<<"Enter the Details \n1. For Student\n2. For Faculty";
            cout<<"\nEnter the Choice: ";
            cin>>ch;

            switch(ch)
            {
            case '1':
                get_infos();
                print_infos();
                break;
            case '2':
                get_infof();
                print_infof();
                break;
            default:
                cout<<"Invalid Choice!";
                break;
            }
        }
};

int main()
{
    Grades g1;
    g1.Display();

    return 0;   
}