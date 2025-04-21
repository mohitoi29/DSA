#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> arr){
  stack<int>s;
  vector<int> ans(arr.size());
  for(int i=arr.size()-1;i>=0;i--){
    while(!s.empty() && s.top()<arr[i]){
        s.pop();
    }
  if(s.empty()){
    ans[i]=-1;
  }
  else ans[i]=s.top();
    s.push(arr[i]);
}
return ans;
}
int main(){
  vector<int> arr={6,1,8,0,2};
  vector<int> ans=func(arr);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}