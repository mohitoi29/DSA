#include<bits/stdc++.h>
using namespace std;
vector<int> func(vector<int> arr,vector<int> arr2){
  stack<int>s;
  vector<int> ans;
  unordered_map<int,int> mp;
  for(int i=arr.size()-1;i>=0;i--){
    while(!s.empty() && s.top()<arr2[i]){
        s.pop();
    }
  if(s.empty()){
    mp[arr2[i]]=-1;
  }
  else mp[arr2[i]]=s.top();
    s.push(arr2[i]);
}
for(int i=0;i<arr.size();i++){
  ans.push_back(mp[arr[i]]);
}
return ans;
}
int main(){
  vector<int> arr={6,1,8};
  vector<int> arr2={6,1,8,0,2};

  vector<int> ans=func(arr,arr2);
  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }
}