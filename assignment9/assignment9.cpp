#include<iostream>
using namespace std;
int count(int x){
    int a=0;
    while(x>0){
      x=x/10;
      a++;
    }
   return a;
}

int square(int x){
    return x*x;
}
int main(){
    int a;
    cout<<"Enter the Number";
    cin>>a;
     cout<<count(a)<<endl;
     cout<<square(a);
}