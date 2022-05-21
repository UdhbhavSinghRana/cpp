#include<iostream>
using namespace std;
int main()
{
    int a,x,k,m,t;
    int y[]={0};
    int w[]={0};
    int e[]={0};
    cout<<"number of element:";
    cin>>a;
    k=0;
    m=0;
    t=0;
    int b[a];
    for (int i=0;i<a;i++){
        cin>>b[i];
    }
    for (int i=0;i<a;i++){
        if (b[i]<0){
            y[k]=b[i];
            k++;
        }
        else if (b[i]==0){
            w[m]=b[i];
            m++;
        }
        else{
            e[t]=b[i];
            t++;
        }

    }
     cout<<"negative"<<endl;
    for (int i=0;i<k;i++){

        cout<<y[i]<<endl;
    }
    cout<<"0's"<<endl;
    for (int i=0;i<m;i++){
        cout<<w[i];
    }
    cout<<"positive"<<endl;
    for (int i=0;i<t;i++){

        cout<<e[i]<<endl;
    }
  return 0;
}


