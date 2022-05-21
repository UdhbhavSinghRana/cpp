#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"b:";

    cin>>b;
    cout<<"c:";
    cin>>c;
    cout<<"1:addition 2:subtraction 3:mulitplication 4:division your operation:";
    cin>>a;
    switch(a) {
    case 1 :
        cout<<b+c;
        break;
    case 2 :
        cout<<b-c;
        break;
    case 3 :
        cout<<b*c;
        break;
    case 4 :
        cout<<b/c;
        break;

    }
}
