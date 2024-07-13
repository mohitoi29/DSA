#include<iostream>
using namespace std;
int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){

ans =ans^arr[i];

    }
    return ans;
}



/*int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
*/
int main(){
    int arr[5]={4,4,3,3,6};
   cout<<"UNique element is " << unique(arr,5);
   
}