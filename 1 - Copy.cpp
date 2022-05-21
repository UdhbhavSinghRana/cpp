#include<iostream>
using namespace std;
int main()
{
    int i = 1;
    int a=1;
    int b=1;
    int s=1;
    while (i<69)
    {

       s=a+b;
       b=a;
       a=s;

       i++;
       cout<<s<<endl;
    }
    return 0;
}
