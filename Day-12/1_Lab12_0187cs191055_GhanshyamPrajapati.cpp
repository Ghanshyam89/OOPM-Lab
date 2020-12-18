// Lab 12:

#include<iostream>
#include<string.h>

using namespace std;

class Person{
    public:
        char name[20];
        int age;
};

class Student : public Person{
    public:
        int rollno;
        float avg;

};

class Graduate : public Student{
    public:
        char subject[20];
        char employee[3];
        static float working;
        static float nonworking;
        static float totalno;
        static float first;
        
        void getData(){
            cout<<"Working Graduate Yes / No: ";
            cin>>employee;
                if(!strcmp(employee,"Yes") || !strcmp(employee,"YES") || !strcmp(employee,"yes")){
                    working++;
                    cout<<"Working\n";
                }
                else if(!strcmp(employee,"No") || !strcmp(employee,"NO") || !strcmp(employee,"no")){
                    nonworking++;
                    cout<<"Non-Working\n";
                }
                else{
                    cout<<"Invalid Entry!";
                    Graduate::getData();
                }
            cout<<"Name: ";
            cin>>name;
            cout<<"Age: ";

            cin>>age;
            cout<<"Subject: ";
            cin>>subject;
            cout<<"Average: ";
            cin>>avg;
            totalno++;
        }

        void Display(){
            
            cout<<"\n\nDetails of the Top-most scorer: ";
            cout<<"\n\nName: "<<name;
            cout<<"\nAge: "<<age;
            cout<<"\nSubject: "<<subject;
            cout<<"\nAverage Marks: "<<avg;
            cout<<"\n\n"<<((100*nonworking)/totalno)<<"=\% of Graduates of this year are non-working & \n"<<((100*first)/totalno)<<"\% are first divisioners.";
        }
        
};

float Graduate::working = 0.0;
float Graduate::nonworking = 0.0;
float Graduate::totalno = 0.0;
float Graduate::first = 0;

int main(){

    int i = 0, n, year, count = 0;
    float average = 0.0;

    cout<<"Number of Students: ";
    cin>>n;
    Graduate g[n];

    cout<<"Enter the Details: ";
    cout<<"\nEnter the Year: ";
    cin>>year;
    
    for( i = 0; i < n; i++){
        cout<<"Enter the Details of Student"<<++count<<"\n";
        g[i].getData();
    }
    cout<<"Output: ";
    cout<<"\nNumber of Working Graduate: "<<Graduate::working;
    cout<<"\nNumber of Non-Working Graduate: "<<Graduate::nonworking<<"\n";

    for ( i = 0; i < n; i++)
    {
        if(g[i].avg > average)
        {
            average = g[i].avg;
        }
        if(g[i].avg > 60){
            Graduate::first++;
        }
    }
    for ( i = 0; i < n; i++)
    {
        if(g[i].avg == average){
            g[i].Display();
        }
    }
    
    return 0;
}