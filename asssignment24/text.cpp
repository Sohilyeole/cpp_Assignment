#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {1, 2, 2, 3, 4};
    int low=1;
    int high=4;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]!=mid){
            cout<<arr[mid];
            break;
        }
        else if(arr[mid]<mid)low=mid+1;
        else high=mid-1;
        
            }
}