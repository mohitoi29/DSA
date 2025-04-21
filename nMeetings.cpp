#include<bits/stdc++.h>
using namespace std;

class Data{
  public:
  int start,end,pos;
};
int main(){
  vector<int>start={1,2,0,5,8,5};
  vector<int>end={2,4,6,7,9,9};
  vector<Data> arr(6);
  for(int i=0;i<6;i++){
    arr[i].start=start[i];
    arr[i].end=end[i];
    arr[i].pos=i+1;
  }
  sort(arr.begin(),arr.end(),[](Data a,Data b){return a.end<b.end;});
  int freetime=arr[0].end;
  int count=1;
  for(int i=1;i<6;i++){
    if(arr[i].start>=freetime){
    count++;    
    freetime=arr[i].end;
    }    
  }

  cout<<count;

}