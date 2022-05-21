#include<iostream>
using namespace std;
int main(){
    int a,x,y;
    cout<<"number of element:";
    cin>>a;
    int b[a];
    x=0;
    for (int i=0;i<a;i++){
        cin>>b[i];
        }
    for (int i=0;i<a;i++){
        x=x+b[i];
        }
    cout<<"sum:"<<x;

}

