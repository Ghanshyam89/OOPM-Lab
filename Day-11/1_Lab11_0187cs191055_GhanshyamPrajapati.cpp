// Lab - 11Consider an example of declaring the examination result. Design three classes:
// Student, Exam and Result. The Student class has data members such as those representing 
// roll number, names etc. Create a class Exam by inheriting the student class. 
// The exam class adds data members representing the marks scored in six subjects. 
// Derive class Result from the exam class and it has own data members such as total_marks.
// Write an interactive program to model this relationship. What type of inheritance this model belongs to?  

// Developed by: Ghanshyam Prajapati
// Date: 07/11/2020.

#include<iostream>
#include<string.h>

using namespace std;

class Student {
    public: 
        char rollno[14];
        char name [20];
        
        void getdata() {
            cout<<"\nEnter Your Roll Number: ";
            cin>>rollno;                                //Roll Number of the Student.
            cout<<"\nEnter Your Name: ";
            cin>>name;                                  //Name of the Student.

            Student :: validateRollno();
            Student :: validatename();
        }
        void validateRollno(){
            int i;
            int len = strlen(rollno);
            for ( i = 0; i < len; i++)
            {
                switch (rollno[i])
                {
                case '0' ... '9':
                    break;
                
                default:
                    cout<<"Roll Number should not contain Characters and other Special Characters.\n";
                    getdata();
                }
            }
        }
        void validatename(){
            int i;
            int len = strlen(name);
            for ( i = 0; i < len; i++)
            {
                switch (name[i])
                {
                case 'a' ... 'z':
                    break;
                case 'A' ... 'Z':
                    break;
                default:
                    cout<<"Name should not contain Numbers, Special Symbols etc..\n";
                    getdata();
                }
            }
        }
};
class Exam : public Student {
    public:
        int marks[6];                                   
        void getmarks() {
            cout<<"\nEnter the Marks: ";
            cout<<"\nEnglish: ";
            cin>>marks[0];                                  //marks[0] --> English Marks.
            cout<<"Hindi: ";
            cin>>marks[1];                                  //marks[1] --> Hindi Marks.
            cout<<"Chemistry: ";
            cin>>marks[2];                                  //marks[2] --> Chemistry Marks.
            cout<<"Physics: ";
            cin>>marks[3];                                  //marks[3] --> Physics Marks.
            cout<<"Mathematics: ";
            cin>>marks[4];                                  //marks[4] --> Mathematics Marks.
            cout<<"Optional: ";
            cin>>marks[5];                                  //marks[5] --> Optional Marks.
            
            Exam :: validatemarks();
        }
        void validatemarks(){
            int i;
            for ( i = 0; i < 6; i++) {
                if(marks[i] > 0 && marks[i] <= 100) {
                    
                }else{
                    getchar();
                    cout<<"\nMarks should be Greater than 0 and less than or Equal to 100 and \nSpecial character are not allowed.\n";
                    Exam :: getmarks();
                    
                    return;
                }
            }
        }
};
class Result : public Exam {
    public: 
        int total_marks = 0;

        void calculate_totalMarks(){
            int i;
            for( i = 0; i < 6; i++) {
                total_marks += marks[i];
            }
        }
        void Display(){
            calculate_totalMarks();
            cout<<"\nStudent Details";
            cout<<"\nRoll Number: "<<rollno;
            cout<<"\nStudent Name: "<<name;
            cout<<"\n\nObtained Marks: ";
            cout<<"\nEnglish: "<<marks[0];
            cout<<"\nHindi: "<<marks[1];
            cout<<"\nChemistry: "<<marks[2];
            cout<<"\nPhysics: "<<marks[3];
            cout<<"\nMathematics: "<<marks[4];
            cout<<"\nOptional: "<<marks[5];
            cout<<"\n\nTotal Marks: "<<total_marks<<"/600\n";
        }
};

int main() {
    Result s1;
    s1.getdata();
    s1.getmarks();
    s1.Display();
    return 0;
}