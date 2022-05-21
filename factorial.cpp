#include<iostream>
using namespace std;
int main()
{
    unsigned int a,d;
    cout<<"a:";
    cin>>a;
    d=1;
    while (a>0){
        d=d*a;
        a--;
    }
    cout<<d;
    }

