// WAP to implement Single Inheritance where class Book inherits

#include<iostream>

using namespace std;

class Book
{
    public:
        char BookName[20];
        float price;
        int NumOfPage;

        void getData(){
            cout<<"Enter the Book Name: ";
            cin>>BookName;
            cout<<"Enter the Price: ";
            cin>>price;
            cout<<"Enter the Number of Pages: ";
            cin>>NumOfPage;
        }
};

class Document : public Book
{   
    public:
        void display(){
            cout<<"\nBook Name: "<<BookName;
            cout<<"\nBook Price: "<<price;
            cout<<"\nNumber of Pages: "<<NumOfPage;
            cout<<endl;
        }
};

int main()
{
    Document d1;
    
    d1.getData();
    d1.display();
    
    return 0;
}