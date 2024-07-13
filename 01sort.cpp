#include<iostream>
using namespace std;
void sorti(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
        while(arr[i]==0 && i<j ){
            i++;
        }
        while(arr[j]==1 && i<j){
            j--;
        }
       if(i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
       }
    
}
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}


int main(){
    int arr[7]={0,1,0,1,0,0,0};
 sorti(arr,7);
 printarr(arr,7);
 return 0;
}