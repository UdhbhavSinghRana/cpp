#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"a:";
    cin>>a;
    if (a%3==0) {
        cout<<a<< " is  a mulitple of 3 ";
    }
    else if (a%7==0) {
        cout<<a<< " is  a mulitple of 7";
    }
    else  {
        cout<<a<< " is neither a mulitple of 3 or 7";
    }
    return 0;
}
