//

#include<iostream>

using namespace std;

class Deposit
{
    public:
        float depositamm;
        float Depositammm(int bal)
        {
            return (bal + depositamm);
        }
};

class Withdraw
{
    public:
        float withdrawamm;
        float Withdrawammm(int bal)
        {
            return (bal - withdrawamm);
        }
};

class Account : public Withdraw , public Deposit
{
    int choice;
    public: 
        int accno;
        float bal;

        void getData()
        {
            cout<<"\nEnter the Account Number: ";
            cin>>accno;
            cout<<"\nEnter the Account Balance: ";
            cin>>bal;
            cout<<"\nWhat you want to do? ";
            cout<<"\n 1. Deposit";
            cout<<"\n 2. Withdraw";
            cout<<"\nEnter your choice: ";
            cin>>choice;
            switch(choice)
            {
                case 1: 
                    cout<<"\nEnter the Ammount to Deposit: ";
                    cin>>depositamm;
                    bal = Depositammm(bal);
                    break;
                case 2:
                    cout<<"\nEnter the Ammount to Withdraw: ";
                    cin>>withdrawamm;
                    bal = Withdrawammm(bal);
                    break;
                case 3:
                    exit(0);
                    break;
                default:
                    cout<<"Invalid Choice!";
            }
        }
        void Print()
        {
            cout<<"\n       Statement\n";
            cout<<"\nAccount Number: "<<accno;
            cout<<"\nAccount balance: "<<bal;
        }
};

int main()
{
    Account A1;
    A1.getData();
    A1.Print();

    return 0;
}