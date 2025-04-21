#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> arr={12,3,0,1,12};
vector<int> ans(5);
stack<int> s;
for(int i=4;i>=0;i--){
  while(!s.empty() && s.top()>=arr[i])
  s.pop();
  ans[i]=s.empty()?-1:s.top();
  s.push(arr[i]);
}
for(int i=0;i<5;i++){
  cout<<ans[i]<<" ";
}
return 0;
}