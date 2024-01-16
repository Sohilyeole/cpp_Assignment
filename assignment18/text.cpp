
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  string s;
  vector<string>v;
  getline(cin,s);
  // cout<<s;
  stringstream ss(s);
  string temp;
  while(ss>>temp){
    v.push_back(temp);
  }
 
  sort(v.begin(),v.end());
  cout<<v[v.size()-1];

  cout<<"dsug";
 
}

