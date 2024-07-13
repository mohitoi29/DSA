#include<bits/stdc++.h>
using namespace std;
int selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
    for(int j=i+1;j<=n-1;j++){
        if(arr[j]<arr[minIndex]){
                minIndex=j;
        }
    }
    swap(arr[minIndex],arr[i]);         
    }
}
int printer(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[7]={1,3,45,67,8,2,9};
    selectionsort(arr,7);
    cout<<"Printing the array "<<endl;
    printer(arr,7);
    return 0;
}