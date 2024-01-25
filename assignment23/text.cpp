#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>

int main(){
    vector<int>v={11,4,63,74,2,3,5,74,78};
    int k;
    cin>>k;
    //by using selection sorting
    for(int i=0;i<k;i++){
        int mindx=-1;
        int mn=INT_MAX;
        for(int j=i;j<v.size();j++){
            if(v[j]<mn){
                mn=v[j];
                mindx=j;
            }
        }
        int temp=v[i];
        v[i]=mn;
        v[mindx]=temp;


    }
    cout<<v[k-1];
}