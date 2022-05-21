#include<iostream>
using namespace std;


int main(){
    int a;
    cin>>a;

    int b=1;
    int c=b;
    while (a>0){
        while (b>0){
            cout<<c;
            b--;
        }
        cout<<endl;
        c++;
        a--;
    }

}


