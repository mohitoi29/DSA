#include<bits/stdc++.h>
using namespace std;
void permute(int index,vector<vector<int>>& sol,vector<int>& num){
  if(index>=num.size()){
    sol.push_back(num);
    return;
  }
  for(int i=index;i<num.size();i++){
      swap(num[i],num[index]);
      permute(index+1,sol,num);
      swap(num[i],num[index]);
  }
}
 int main(){
      vector<int> num={1,2,3};
    vector<vector<int>> sol;
    permute(0,sol,num);
    cout<<"[";
  for(auto i:sol){
    cout<<"[";
    for(auto j:i){
      cout<<j<<" ";
    }
    cout<<"]";
  }
  cout<<"]";
 }