#include<iostream>
using namespace std;
int main()
{
    int a,x,y;
    cout<<"number of element:";
    cin>>a;
    int b[a];
    for (int i=0;i<a;i++){
        cin>>b[i];
    }
   for (int i=0;i<a;i++){
       // cout<<b[i]<<endl;
    }
     for (int i=0;i<a-1;i++){
        if (b[i]<b[i+1]) {
             x = b[i+1];
        }
        else{
             x=b[i];
        }
    }
    cout<<"max:"<<x<<endl;
}
