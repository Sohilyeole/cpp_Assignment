#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   vector<int>v={11,23,0,23,4,0,3,6,0,0,5};
   int j=0;
   for(int i=0;i<v.size();i++){
    if(v[i]!=0){
       int temp=v[i];
       v[i]=v[j];
       v[j]=temp;
        j++;
    }
    
   }
   for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
   }


  
}