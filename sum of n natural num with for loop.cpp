#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"n:";
    cin>>a;
    int d=0;
    b=0;
    for (int i=a;i>0;i--){
        b++;
        d=d+b;

    }
    cout<<d;
}
