#include<iostream>
using namespace std;
int main(){
    string a;
    cin>>a;
    string s="";
    int b= a.length();
    b=b-1;
    char *ptr;
    ptr= &a[b];
    int i=0;
   while (i<(b+1)){
        s=s+*ptr;
        ptr--;
        i++;
    }
    cout<<s;

}
