// Lab-21: Write a program to design a class representing the information regarding digital library
//         (books, tape: book & tape should be separate classes having the base  class as media).
//         The class should have the functionality for adding new item, issuing, deposit etc.
//         The program should use the runtime polymorphism.

// Developed by: Ghanshyam Prajapti
// Date: 29/12/2020

#include <iostream>
#include <cstring>

using namespace std;

class media
{
protected:
    char title[50];
    float price;
public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display() {}
};

class book : public media
{
    int pages;
public:
    book(char *s, float a, int p) : media(s, a)
    {
        pages = p;
    }
    void display();
};

class tape : public media
{
    float time;
    public :
    tape(char *s, float a, float t) : media(s, a)
    {
        time = t;
    }
    void display();
};

void book::display()
{
    cout <<"\n Title :"<< title;
    cout <<"\n Pages :"<< pages;
    cout <<"\n Price :"<< pages;
}

void tape::display()
{
    cout <<"\n Title :"<< title;
    cout <<"\n Play time :"<<time;
    cout <<"\n Price :"<< price;
}
int main()
{
    char *title = new char[30];
    float price, time;
    int pages;

    // book details
    cout <<"\n Enter book details\n";
    cout <<"\n Title : ";
    cin >> title;
    
    cout <<"\n Price : ";
    cin >> price;
    
    cout <<"\n pages : ";
    cin >> pages;

    book book1(title, price, pages);

    cout <<"\n Enter tape details \n";
    cout <<" Title : ";
    cin >> title;

    cout <<" Price : ";
    cin >> price;

    cout <<" Play time(mins) :";
    cin >> time;

    tape tape1(title, price, time);

    media *list[2];

    list[0] = &book1;
    list[1] = &tape1;

    cout <<"\n MEDIA DETAILS";
    cout <<"\n Book Details";
    list[0]->display();
    
    cout <<"\n Tape Details";
    list[1]->display();

    cout<<endl;
    return 0;
}