#include<iostream>
using namespace std;
int main(){
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
            k++;
        }
        else if (b[i]==0){
            m++;
        }
        else{
            e[t]=b[i];
            t++;
        }

    }
    cout<<"number of Negative:"<<k<<endl;
    cout<<"number of 0s:"<<m<<endl;
    cout<<"number of Positve:"<<t<<endl;
    return 0;
}
