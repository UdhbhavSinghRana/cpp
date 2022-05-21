#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a;
    c=1;
    d=1;
    b=0;
    while (a>0){
        d=c*c;
        b=b+d;
        c++;
        a--;
    }
    cout<<b;
    return 0;
}
