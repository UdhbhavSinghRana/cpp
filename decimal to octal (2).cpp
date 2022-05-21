#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cout<<"decimal:";
   cin>>a;
   b=a;
   int y;
   int x=0;
   while (a/8>1){
        x++;
        a=a/8;
        //cout<<y;
   }
   //cout<<a;
   x=10;
   int l=0;
   int c[x]={0};
   for (int i=0;i<x;i++){
    y=b%8;
    b=b/8;
    c[i]=y;
    l++;
   }
    cout<<"octal:";
     for (int i=l-1;i>=0;i--){
        cout<<c[i];
    }

    return 0;
}


