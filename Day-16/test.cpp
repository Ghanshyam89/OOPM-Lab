#include<iostream>

using namespace std;

class s{
    public: 
    // char num = 0;
    int n = 0;
    int m = 0;
    int l = 0;
    void sum(){}
};

int main(){
    s *s1 = new s();
    s s2;
    cout<<sizeof(s1);
    cout<<sizeof(new s());
    cout<<sizeof(s1->sum());
    return 0;
}