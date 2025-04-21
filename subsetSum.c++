#include<bits/stdc++.h>
using namespace std;
void ss(int i,vector<int>& arr,vector<int>& ans,int n,int sum){
  if(i==n){
    ans.push_back(sum);
    return;
  }
  ss(i+1,arr,ans,n,sum+arr[i]);
  ss(i+1,arr,ans,n,sum);
}
vector<int> subsetsum(vector<int>& arr,int n){
  vector<int>ans;
  ss(0,arr,ans,n,0);
  sort(ans.begin(),ans.end());
  return ans;
}
int main(){
  vector<int> arr={1,2,3,4,5};
  vector<int> res=subsetsum(arr,5);
  for(int i=0;i<res.size();i++){
    cout<<res[i]<<" ";
  }
  return 0;
}