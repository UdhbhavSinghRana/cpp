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
    int m1,n1;
    cout<<"for the second matrix";
    cout<<"row:";
    cin>>m1;
    cout<<"column:";
    cin>>n1;
    int a1[m1][n1];
    for (int o=0;o<n1;o=o){
        for (int i=0;i<m1;i++){
            cin>>a[i][o];

        }
    o++;
    }


    for (int o=0;o<m1;o=o){
        for (int i=0;i<n1;i++){
            cout<<a[o][i];

        }
    o++;

    cout<<endl;
    }
    if (n1==n){
        for (int o=0;o<n1;o=o){
        for (int i=0;i<m1;i++){
            cin>>a[o][i];

            }
        o++;
        }
    }
    return 0;
}
