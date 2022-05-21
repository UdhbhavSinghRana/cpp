#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a:";
    cin>>a;
    b=10;
    c=1;
    int d=1;
    while (b>0){
        d=a*c;
        c++;
        b--;
        cout<<d<<endl;


    }
}
