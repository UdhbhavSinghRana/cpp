#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a){

    case 0 :
    cout<<"OS";
    break;
    case 1 :
    cout<<"DBms";
    break;
    case 2 :
    cout<<"Oops";
    break;
    case 3 :
    cout<<"Ds";
    break;
    default :
        cout<<"not registered";
        break;
    }
    return 0;
}
