#include<iostream>
using namespace std;
int main(){
    double x,y;
    int a;
    cout<<"number of element:";
    cin>>a;
    int b[a];
    x=0;
    y=0;
    for (int i=0;i<a;i++){
        cin>>b[i];
        }
    for (int i=0;i<a;i++){
        x=x+b[i];
        y++;
        }
    cout<<"sum:"<<x<<endl;
    cout<<"avg:"<<(x/y);

}

