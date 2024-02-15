#include<iostream>
using namespace std;
#include<vector>
void printIncreasingSequences(int curr, int n, int k, vector<int> &ans) {
if(ans.size() == k) {
for(int i = 0; i < k; ++i) {
cout << ans[i] << " ";
}
cout << endl;
return;
}
for(int i = curr+1; i <= n; ++i) {
ans.push_back(i);
printIncreasingSequences(i, n, k, ans);
ans.pop_back();
}
}
int main() {
int n, k;
vector<int>ans;
cin >> n >> k;
printIncreasingSequences(0, n, k,ans);


}