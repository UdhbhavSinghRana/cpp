#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a){

    case 0 :
    cout<<"OS";
    case 1 :
    cout<<"DBms";
    case 2 :
    cout<<"Oops";
    case 3 :
    cout<<"Ds";
    default :
        cout<<"not registered";
    }
    return 0;
}
