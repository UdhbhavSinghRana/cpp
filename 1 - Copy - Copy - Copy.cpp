#include<iostream>
using namespace std;


int main(){

    int a;
    cin>>a;
    string b="";
    int n=1;
    int x=n;
    int v[]={0};
    int y=1;
    int z=n;

    while (n<a+1){
        while (x>0){
        cout<<z;
        x--;
        z++;
        }
    x=y+1;
    int i=x;
    y++;
    if (i>2){
        z--;
        i++;
    }
    cout<<endl;
    n++;
    //z++;
}

}
