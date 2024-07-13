#include<bits/stdc++.h>
using namespace std;
int bubble(int arr[],int n){
    for(int i=1;i<n;i++){
        for (int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j])
            swap(arr[j+1],arr[j]);

        }

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
    bubble(arr,n);
    printer(arr,n);
}