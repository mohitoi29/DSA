#include<bits/stdc++.h>
using namespace std;

int main(){
  string s1,s2;
  cin>>s1>>s2;
  map<char,int>mp;
  string temp=s1+s2;
  for(int i:temp){
    
  mp[temp[i]]++;
  }
  int ans=0;
  bool has_odd=false;
    for (auto it : mp) {
      
      if(it.second%2==0){
         ans += it.second;
      }

      else {
        ans+=it.second-1;
        has_odd=true;
      }

  }
  if(has_odd)
  ans+=1;
  cout<<"Result : "<<ans;
  return 0;

}