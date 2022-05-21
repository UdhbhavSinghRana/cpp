#include<iostream>
using namespace std;
int main()
{
    unsigned int i = 1;
    unsigned int a=1;
    unsigned int b=1;
    unsigned int s=1;
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
