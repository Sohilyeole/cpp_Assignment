#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>>v={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target = 60;
    bool flag=false;
    int row=v.size(); //3
     int col=v[0].size();//4
     int low=0;
     int high=row-1;
     while(low<=high){
        int mid=(low+high)/2;
        if(v[mid][0]<=target&& v[mid][col-1]>=target){
          int l=0;int h=col-1;
          while(l<=h){
            int m=(l+h)/2;
            if(v[mid][m]==target){
                flag=true;
                break;
            }
            else if(v[mid][m]<target)l=m+1;
            else h=m-1;
          }
            break;
        }
        else if(v[mid][0]<target){
             low=mid+1;
        }
        else high=mid-1;
     }
    
     if(flag==false){
        cout<<"false";
     }
     else cout<<"true";
  
}