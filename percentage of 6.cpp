#include<iostream>
using namespace std;

int
main ()
{
int a[6];
int i=1;
int b=6;
int x=0;
while (b>0){
    cin>>a[i];
    x=x+a[i];
    b--;
}
int v=x/6;
cout<<v<<"%";
}

