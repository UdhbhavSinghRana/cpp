#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Age:";
    cin>>a;
    if (a<18){
        cout<<"minor not eligible"
    }
    else if (a>18 && a<60){
        cout<<"Eligible for vaccination with highest priority"
    }
    else (a>60){
        cout<<"Eligible for vaccination with least priority"
    }
    return 0;
}
