#include<bits/stdc++.h>
using namespace std;
int main() {

	int a=8;
    int b[a];
    int x=0;
    int x1=0;
    int x2=0;
    int x3=0;
    int x4=0;
    int x5=0;
    int x6=0;
    int x7=0;
    int k=0;
    int i=0;
    int fo=4;

    for (int i=0;i<a;i++){
        cin>>b[i];
    }
    for (int j=0;j<a;j++){
        if (k<=4){
    	for (int z=i;z<4;z++){
        	if (k==0){
                x=x+b[z];
            	}
            else if (k==1){
                x1=x1+b[z];
            	}
            else if (k==2){
                x2=x2+b[z];
            	}
            else if (k==3){
                x3=x3+b[z];
            	}
            else if (k==4){
                x4=x4+b[z];
            	}

    		}
        }
        i=i+1;
        k=k+1;
        int abc=5;
        int p=4;
        if(k>4) {
        while(p>0){
             if (k==5){
                if (abc>=7){
                    abc=0;
                    }
                else{
                    abc=abc;
                }
                x5=x5+b[abc];
                abc++;
            	}
            else if (k==6){
                if (abc>=7){
                    abc=0;
                    }
                x6=x6+b[abc];
                abc++;
            	}
            else if (k==7){
                if (abc>=7){
                    abc=0;
                    }
                x7=x7+b[abc];
                abc++;
                }
        p--;
        }
    }
    }
    int d[8]={x,x1,x2,x3,x4,x5,x6,x7};
    for (int j=0;j<7;j++){
       for (int i=0;i<7;i++){
              if (d[i]>d[i+1]){
                  int c;
                  c=d[i];
                  d[i]=d[i+1];
                  d[i+1]=c;
              }
       }
   }
    for (int i=0;i<a;i++){
        cout<<d[i]<<endl;
    }

}
