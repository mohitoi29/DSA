#include<bits/stdc++.h>
using namespace std;
int merge(int arr1[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr1[j]!=0){
            swap(arr1[j],arr1[i]);
            i++;
        }
    }
    }
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int arr1[6]={1,0,5,0,2,0};
merge(arr1,6);
print(arr1,6);
} 