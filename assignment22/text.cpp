#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
   string arr[5]={"sohil","yeole","pratik","abhishek","abhidnya"};
   for(int i=0;i<5-1;i++){
    for(int j=0;j<5-1;j++){
       if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
       }
    }
   }

   for(string s : arr){
    cout<<s<<"  ";
   }

}