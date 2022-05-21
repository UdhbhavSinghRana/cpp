#include<iostream>
using namespace std;
int main()
{   int m,n;
    cout<<"for first matrix"<<endl;
    cout<<"row:";
    cin>>m;
    cout<<"column:";
    cin>>n;
    int a[m][n];
    for (int o=0;o<n;o=o){
        for (int i=0;i<m;i++){
            cin>>a[i][o];

        }
    o++;


    }

    for (int o=0;o<n;o=o){
        for (int i=0;i<m;i++){
            cout<<a[i][o];

        }
    o++;

    cout<<endl;
    }
    return 0;
}
