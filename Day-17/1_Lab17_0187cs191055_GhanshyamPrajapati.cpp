#include<iostream>

using namespace std;

class Time {
    int hour, min, sec;
    public: 
        void get_Time(){
            cout<<"\nEnter Hour, Minutes, Seconds\n";
            cin>>hour>>min>>sec;
        }
        void print_Time(){
            cout<<"\nTime is "<<hour<<" : "<<min<<" : "<<sec<<endl;
        }
        Time operator +(Time time1) {
            Time time;
            int a, b ;
            a = sec + time1.sec;
            time.sec = a%60;
            b = (a/60) + min + time1.min;
            time.min = b%60;
            time.hour = (b/60) + hour + time1.hour;
            return time;
        }
};

int main(){
    Time t1, t2, t3;
    cout<<"\nTime 1\n";
    t1.get_Time();
    t1.print_Time();
    cout<<"\nTime 2\n";
    t2.get_Time();
    t2.print_Time();
    t3 = t1 + t2;
    cout<<"\nTime1 + Time2 \n";
    t3.print_Time();
    return 0;
}