#include<iostream>
using namespace std;

int main ()
{
    int a;
    cin>>a;
    int s;
    cin>>s;
    int b[a];
    int x;
    int y=0;
    int j=0;
    int ll=a;
    for (int i =0;i<a;i++){
        cin>>b[i];
    }

    for (int i=0;i<a;i++){
        x=b[i];
        for (int k=j;k<ll;k++){
            y=x+b[k];
            if (y==s){
                cout<<x<<" "<<b[k];
                cout<<endl;
            }

        }
    j++;
        a--;
    }
}


