#include <iostream>
using namespace std;
int main(){
    int n ,x;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
       }
   for (int j=0;j<n-1;j++){
       for (int i=0;i<n-1;i++){
              if (a[i]>a[i+1]){
                  int c;
                  c=a[i];
                  a[i]=a[i+1];
                  a[i+1]=c;
              }
       }
   }
   cout<<"Max:"<<a[n-1];
    cout<<"\n 2nd Max:"<<a[n-2];
}
