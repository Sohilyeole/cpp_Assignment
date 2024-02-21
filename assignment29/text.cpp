#include<iostream>
#include<vector>
#include<string>
using namespace std;


void binary(int n,string s){
    if(n==0){
      int d= stoi(s);
      cout<<d;
        return;
    }
   int q=n/2;
   int rem=n%2;
   binary(q,s+to_string(rem));

}

int  main(){
    
   int n=15;
  binary(n,"");
}

