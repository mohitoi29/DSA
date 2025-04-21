#include<bits/stdc++.h>
using namespace std;
void permute(vector<vector<int>>& sol,vector<int>& subAns,vector<int>& num,vector<bool>& check){
  if(subAns.size()==num.size()){
    sol.push_back(subAns);
    return;
  }
  for(int i=0;i<num.size();i++){
      if(!check[i]){
          check[i]=1;
          subAns.push_back(num[i]);
          permute(sol,subAns,num,check);
          check[i]=0;
          subAns.pop_back();  
      }
  }
}
 int main(){
      vector<int> num={1,2,3};
    vector<vector<int>> sol;
    vector<int> subAns;
   vector<bool>check(num.size(),false);
    permute(sol,subAns,num,check);
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