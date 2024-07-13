#include<bits/stdc++.h>
using namespace std;
int pivot(int arr[],int n){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
      mid=s+(e-s)/2;
    }
      return arr[s];

}


int main(){
    int arr[6]={3,4,5,6,1,2};
    cout<<"Pivot Element is "<<pivot(arr,6);
}