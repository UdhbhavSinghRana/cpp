#include<iostream>
using namespace std;
int main()
{
   int n ,x,n2;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
       }
    cout<<"Number for search:";
    cin>>n2;
    for (int i=0;i<n;i++){
        if (n2==a[i]){
            cout<<"The "<<n2<<" positon is:"<<i;
        }
    }
   }


