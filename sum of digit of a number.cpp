#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,sum1,f,w,q;
    w=0;
    sum1=0;
    e=1;
    cin>>a;
    f=a;
    while (f>1){
        f=f/10;
        w++;
    }
    q=w;
    while (w>0){
        e=e*10;
        w--;
    }
    w=q;
    while (w>=0){
        if (b==0){
        b=a/e;
        }
        else{
            b=(a/e)-(b*10);
        }
        e=e/10;
        sum1=sum1+b;
        w--;
    }
    cout<<sum1;
    return 0;
}
