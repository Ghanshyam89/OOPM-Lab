/* Date: 04/11/2020
// Lab-3.
// An electricity board charges the following rate to domestic users to discourage large consumption of energy.
// 1. For the first 100 Unit 60 P/Unit
// 2. For the next 100 Unit 80 P/Unit
// 3. BEYOND 200 Unit 92 P/Unit
// All users charge minimum Rs 50. If the total amount is more than RS 300 then an additional 15% is added. 
// // Write a program to read the name of users, no of unit consume and print out charge with the name.
*/
                                                                               
#include<iostream>

using namespace std;

class Electricity{
    char name[13];
    int noOfUnit;

    public:
        void get_data()
        {
            cout<<"Enter the User's Name: ";
            gets(name);
            cout<<"Enter the Number of unit comsumed: ";
            cin>>noOfUnit;
        }
        void display()
        {
            cout<<"\nName: "<<name<<endl;
            cout<<"Charge: "<<charge()<<endl;
        }
        float charge()
        {
            float rate, charge;

            if(noOfUnit > 0 && noOfUnit <= 100)
            {
                rate = 0.6;
                charge = rate * noOfUnit;
            }
            else if(noOfUnit > 100 && noOfUnit <= 200)
            {
                rate = 0.8;
                noOfUnit = noOfUnit - 100;
                charge = rate * noOfUnit;
            }
            else if(noOfUnit > 200)
            {
                rate = 0.92;
                noOfUnit = noOfUnit - 100;
                charge = rate * noOfUnit;
            }

            if(charge < 50)
            {
                return 50;
            }
            else if(charge > 300)
            {
                return ((charge * 15)/100);
            }
            else 
                return charge;
        }
};

int main()
{
    Electricity electricity;
    electricity.get_data();
    electricity.display();
    return 0;
}