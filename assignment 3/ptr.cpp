#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    cout<<"value ptr1:"<<*ptr1<<endl;
    cout<<"value ptr2:"<<*ptr2<<endl;
}
