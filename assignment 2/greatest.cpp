#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"a:" ;

    cin>>a;

    cout<<"b:" ;

    cin>>b;

    cout<<"c:";

    cin>>c;


    if (a>b && a>c ){
        cout <<"a is greatest";
    }
    else if (b>c && b>a){
        cout<<"b is greatest" ;
    }
    else if (a==b && b==c) {
        cout<<"all are equal";
    }
    else if (a==b && a>c){
        cout<<"a and b are equal and greater than c";
    }
    else if (b==c && b>a){
        cout<<"c and b are equal and greater than a";
    }
    else if (a==c && c>b){
        cout<<"a and c are equal and greater than b";
    }
    else {
        cout<<"c is greatest";
    }
    return 0;
}
