#include<iostream>
using namespace std;
int main()
{
    int a,x,y,k;
    cout<<"number of element:";
    cin>>a;
    int b[a];
    for (int i=0;i<a;i++){
        cin>>b[i];
    }
     for (int i=0;i<a-1;i++){
        if (b[i]<=b[i+1]) {
             k = b[i+1];
        }
        else{
             k=b[i];
        }
    }
    if (k<=b[0]){
        k=b[0];
    }
    cout<<"max"<<k<<endl;

     for (int F=0;F<a-1;F++){
        if (b[F]<=b[F+1] && b[F]!=k) {
             x = b[F+1];
            }
        else{
             x=b[F];
            }
    }

    if (x<=b[0]){
        x=b[0];
    }
    cout<<"Second Max:"<<x<<endl;
}



