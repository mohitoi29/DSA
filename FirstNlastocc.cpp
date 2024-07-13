#include<iostream>
using namespace std;
int firstocc(int arr[], int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
     while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;

     }
     return ans;
}
int lastocc(int arr[], int n,int key){
    int s=0,e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
     while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
         mid=s+(e-s)/2;

     }
     return ans;
}
int main(){
    int arr[7]={1,2,3,4,4,4,3};
    int key;
    cout<<"Enter the key"<<endl;
    cin>>key;
    cout<<"First occurence of the key "<<firstocc(arr,7,key)<<endl;
    cout<<"Last occurence of the key "<<lastocc(arr,7,key);
    return 0;
    
}