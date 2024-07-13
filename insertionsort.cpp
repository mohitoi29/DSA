#include<bits/stdc++.h>
using namespace std;
int insertion(int arr[], int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(arr[j]>temp)
            arr[j+1]=arr[j];
            else
            break;
            j--;
        }
        arr[j+1]=temp;     
    }
}


int printer(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter the Array size"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Enter the array element "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    printer(arr,n);
}