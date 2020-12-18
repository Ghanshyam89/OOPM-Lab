//  WAP to create book class with private data member’s title, author name,
//  price accepting inputs from user and display book’s details through two objects 
//  (one will be local object and another will be global object).

#include<iostream>

using namespace std;

class Book{
    char title[13], ch[2];
    char name[13];
    int price;

    public:
        void get_data(){
            
            cout<<"\nEnter the Title:";
            gets(title);
            cout<<"Enter the Author name:";
            gets(name);
            cout<<"Enter the Price:";
            cin>>price;
            gets(ch);
        }

        void display(){
            cout<<"Title: "<<title<<"\n";
            cout<<"Name: "<<name<<"\n";
            cout<<"Price: "<<price<<"\n";
        }
}book1;

int main()
{
    Book book2;

    cout<<"\nFirst Object\n";
    book1.get_data();

    cout<<"\nFirst Object Deatails\n";
    book1.display();

    cout<<"\nSecond Object\n";

    book2.get_data();

    cout<<"\nSecond Object Details\n";
    book2.display();

    return 0;
}