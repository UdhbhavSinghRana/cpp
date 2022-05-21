
#include <iostream>
using namespace std;
int sum(int a,int b){
    int c;
  //  cout<<"Enter value:";
   // cin>>a>>b;
    c=a+b;
    return c;

}
int main()
{
    int x,y;
    cout<<"enter value:";
    cin>>x>>y;
    int ret=sum(x,y);
    cout<<ret;
}
