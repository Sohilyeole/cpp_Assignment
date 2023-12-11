#include <iostream>
using namespace std;
int main() {
int arr[6]={17 ,37, 1, 12, 29, 10};
int max1=0;
int max2=0;
for(int i=0;i<5;i++){
if(max1<arr[i]){
max2=max1;
max1=arr[i];
}
else if(max2<arr[i] && arr[i]!=max1){
max2=arr[i];
}
}
if(max2==0){
cout<<"No second element exists"<<endl;
}
else cout<<max2<<endl;
return 0;
}