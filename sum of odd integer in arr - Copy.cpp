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
        if (b[i]%2!=0){
        x=x+b[i];
        }
        else{
            x=x;
        }
    }
    cout<<"sum:"<<x;

}

