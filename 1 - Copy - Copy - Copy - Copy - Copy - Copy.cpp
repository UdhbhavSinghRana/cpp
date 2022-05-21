#include<iostream>
using namespace std;

int main ()
{
    int n ,x,s,middle,ll;
    cout<<"Enter the number of elements: ";
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
       }
    for (int j=0;j<n;j++){
        for (int i=0;i<n;i++){
            if (a[i]>a[i+1]){
                int c;
                c=a[i];
                a[i]=a[i+1];
                a[i+1]=c;
              }
       }
   }
      cout<<"enter the number to search:";
    cin>>s;
   middle=n/2;
   ll=0;
   int ul=n-1;
   bool ww;
   int v=(n/2)+2;
   int v2=v-2;
   while (a[v]!=s && a[v2]!=s){
     if (s==a[middle-1]){
            ww=true;
            break;
        }
    else if (s==a[middle+1]){
        ww=true;
        break;
    }
    if (s>a[middle]){
        ll=n/2;
        n=ul+ll;
        middle=(ul+ll)/2;
        //ww=true;
    }
    else if(s<a[middle]){

        //ww=true;
        ul=n/2;
        n=ul+ll;
        middle=(ul+ll)/2;
        v=v2;

    }
    else if (s==a[middle]){
        ww=true;
        break;
    }
    else{
        ww=false;
    }
   }
   if (a[v]==s && a[v2]==s){
    ww=true;
   }
   if(ww){
    cout<<"it is present and positon="<<v;
   }
   else{
    cout<<"not present";
   }
}

