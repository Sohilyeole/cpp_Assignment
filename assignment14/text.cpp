#include<iostream>
#include<climits>
# define row 5
# define col 5
using namespace std;

void display(int arr[row][col]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i==row/2){
                cout<<arr[i][j];
            }
            else if(j==col/2 ){
            cout<<arr[i][j];
        }
       
        else{
            cout<<" ";
        }
       
    }
    cout<<endl;
}
}

int main(){
  
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    display(arr);
    
}