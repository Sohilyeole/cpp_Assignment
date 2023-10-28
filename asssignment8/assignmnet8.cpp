#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value on n:";
    cin>>n;
    int m=n-1;
    int nspr=n*2-1-4;
    
    for(int a=1;a<=n*2-1;a++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=1;i<=n-1;i++){
        for(int j=1;j<=m-i+1;j++){
            cout<<"*";
        }
        for(int k=1;k<=i*2-1;k++){
            cout<<" ";
        }
        for(int j=1;j<=m-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int j=1;j<=m-1;j++){
        for(int a=1;a<=j+1;a++){
            cout<<"*";

        }
        for(int k=1;k<=nspr;k++){
           cout<<" ";
        }
        nspr=nspr-2;
        for(int a=1;a<=j+1;a++){
            cout<<"*";

        }


        cout<<endl;
    }
     for(int c=1;c<=n*2-1;c++){
        cout<<"*";
    }   
    cout<<endl;

}