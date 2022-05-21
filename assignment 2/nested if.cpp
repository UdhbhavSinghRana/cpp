#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if (a>=9 && a<=10){
        cout<<"A+";
    }
    else if(a>=8 && a<9){
        cout<<"A";
    }
    else if(a>=7 && a<8){
        cout<<"B+";
    }
    else if(a>=6 && a<7){
        cout<<"B";
    }
    else if(a>=5 && a<6){
        cout<<"C+";
    }
    else if(a>=4 && a<5){
        cout<<"C";
    }
    else{
        cout<<"fail";
    }
    return 0;
}
