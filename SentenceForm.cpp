#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<pair<string,int>> sentence;
  for(int i=0;i<n;i++){
    string words;
    cin>>words;
    sentence.push_back({words,i});
  }
  stable_sort(sentence.begin(),sentence.end(),[]( const pair<string,int>& a,const pair<string,int>& b){
    return a.first.length()<b.first.length();
  });
  for(auto it:sentence){
    cout<<it.first<<" ";
  }
}