#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
       
  
    for(int i=1;i<=n*2-1;i++){
        if(i<=n){
        for(int j=1;j<=n;j++){
          if(n+1-i<=j){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        cout<<endl;
        }
        
        else{
        for(int k=1;k<=n;k++){
             if(k>i-n){
            cout<<"*";
          }
          else{
            cout<<" ";
          }
        }
        cout<<endl;

        }
        
       cout<<endl;

    }
}
    

