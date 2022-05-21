#include<iostream>
using namespace std;


int main(){
    int a;
    cin>>a;
    int b=1;
    string c="";
    while (a>0){
        c=c+"*";
        cout<<c;
        b++;
        a--;
    }

}


