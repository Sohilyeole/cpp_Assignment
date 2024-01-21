#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    bool flag=true;
    int arr[5]={1,2,2,3,4};
    for(int i=0;i<5-1;i++){
        if(arr[i]>arr[i+1]){
            flag=false;
        }
    }
    if(flag)cout<<"Sorted";
    else cout<<"Unsorted";
   }