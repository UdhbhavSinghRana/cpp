#include<iostream>
using namespace std;
int linearSearch(int n, int n2)
{

    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
       }

    for (int i=0;i<n;i++){
        if (n2==a[i]){
            return i;
        }
    }
}
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    while(a>0){
        int r3=linearSearch(b,c);
        a--;
        cout<<r3;
    }
    return 0;
}
