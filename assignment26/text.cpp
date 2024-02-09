#include<iostream>
#include<string>
using namespace std;
int count(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 4;
    return count(n-1)+count(n-2)+count(n-3);
}

int main(){
    int a;
    cin>>a;
   cout<<count(a);
}