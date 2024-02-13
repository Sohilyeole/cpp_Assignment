#include<iostream>
#include<vector>
using namespace std;

// void print(vector<int>&arr,int n){
//     if(n==0)return;
//    vector<int>v(n-1);
//    for(int i=0;i<n-1;i++){
//     v[i]=arr[i]+arr[i+1];
//    }
//     for(int i=0;i<n-1;i++){
//     cout<<v[i]<<" ";
//    }
//    cout<<endl;
//    print(v,n-1);

   
   
  
// }
void print(vector<int>&arr,int n){
    if(n==0)return;
     for(int i=0;i<arr.size();i++){
     cout<<arr[i]<<" ";
   }
    vector<int>v(n-1);
    for(int i=0;i<n-1;i++){
    v[i]=arr[i]+arr[i+1];
   }
   cout<<endl;
   print(v,n-1);

}
int main(){
    vector<int>arr={5,4,3,2,1};
    print(arr,5);
}