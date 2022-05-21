#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"n:";
    cin>>a;
    b=0;
    c=2;
    e=c;
    d=2;
    for (int b;b<a;b=b){
        for (int w=9;w>0;w--){
            if (d%c==0 && c!=d){
                break;

            }
            else{
                c++;
            }

        }
        if (d%c==0 && c!=d){

            }
        else{
          cout<<d<<endl;
          b++;
        }

        c=e;
        d++;
    }
    return 0;
}
