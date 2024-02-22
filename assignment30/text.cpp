#include<iostream>
#include<vector>
using namespace std;
int c=0;

int insertion(vector<int>a,vector<int>b){
     int i=0,j=0 ,count=0;
    while(i<a.size()&& j<b.size()){
         if(a[i]>2*b[j]){
       count=count+(a.size()-i);
       j++;
         }
         else{
            i++;
         }
    }
    return count;
}

void merge(vector<int>&v1,vector<int>&v2,vector<int>&v){
    int i=0;int j=0;int k=0;
    while(i<v1.size()&& j<v2.size()){
        if(v1[i]<v2[j]){
            v[k]=v1[i];
            i++;
        }
        else {
            v[k]=v2[j];
            j++;
        }
        k++;
    }
    if(i==v1.size()){
        while(j<v2.size()){
            v[k]=v2[j];
            k++;
            j++;
        }
    }
    if(j==v2.size()){
        while(i<v1.size()){
            v[k]=v1[i];
            k++;
            i++;
        }
    }
}
void mergesortdec(vector<int>&v){
    int n=v.size();
    if(n==1)return;
    int n1=n/2;
    int n2=n-n1;
    vector<int>a(n1);
    vector<int>b(n2);
    for(int i=0;i<a.size();i++){
        a[i]=v[i];
    }
    for(int i=0;i<b.size();i++){
        b[i]=v[n1+i];
    }

    mergesortdec(a);
    mergesortdec(b);
    ///here a& b are sorted array
    c=c+ insertion(a,b);
  merge(a,b,v);
}

int main(){
    vector<int>v={2,4,3,5,1};
 
    mergesortdec(v);
    for(int ele : v){
        cout<<ele<<" ";
    }
    cout<<c;
    
}