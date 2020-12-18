// Lab 9 WAP to create a class TAXPAYER in C++ with following description:
// Private members:
// - Name of type string
// - PanNo of type string
// - Taxabincm (Taxable income) of type float
// - TotTax of type double
// 1)  A function CompTax( ) to calculate tax according to the following slab:
// Taxable Income               Tax%
// Up to 160000                  0
// >160000 and <=300000          5
// >300000 and <=500000         10
// >500000                      15
// Public members:
// A parameterized constructor to initialize all the members
// 2) A function INTAX( ) to enter data for the tax payer and call function CompTax( ) to assign TotTax.
// 3) A function OUTAX( ) to allow user to view the content of all the data members.

#include<iostream>
#include<string.h>
using namespace std;

class Taxpayer{
    private:
        char name[20];
        char panNo[6];
        float TaxIncome;
        double TotTax;

        void CompTax(){
            if(TaxIncome <= 160000){
                TotTax = 0;
            }else if(TaxIncome > 160000 && TaxIncome <= 300000){
                TotTax = 0.05*TaxIncome;
            }else if(TaxIncome > 300000 && TaxIncome <= 500000){
                TotTax = 0.1*TaxIncome;
            }else if(TaxIncome > 500000){
                TotTax = 0.15*TaxIncome;
            }
        }

    public:
        Taxpayer(char name1[20], char panNo1[6], float TaxIncome1, double tax){
            strcpy(name, name1);
            strcpy(panNo, panNo1);
            TaxIncome = TaxIncome1;
            TotTax = tax;
        }
        void Intax(){
            cout<<"Enter The Name: ";
            cin>>name;
            cout<<"Enter the Pan Number: ";
            cin>>panNo;
            cout<<"Enter the Tax Income: ";
            cin>>TaxIncome;
            CompTax();
        }
        void Outax(){
            cout<<"Name: "<<name;
            
            cout<<"\nPan Number: "<<panNo;
            
            cout<<"\nTax Income: "<<TaxIncome;
            
            cout<<"\nTotal Tax: "<<TotTax;
        }
};

int main(){
    Taxpayer taxpayer1("xyz", "ABC", 0.0, 0.0);
    
    cout<<"Enter Details: \n";
    taxpayer1.Intax();
    cout<<"Details: ";
    taxpayer1.Outax();
    return 0;
}