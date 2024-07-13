#include<iostream>
using namespace std;
int printarr(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<< endl;
}
int reversearr(int arr[], int n){
    int start = 0;
    int end = n-1;
    
    while (start<=end){
    
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
   

}


int main(){
    int arr[6]={5,3,6,7,8,9};
    int brr[5]={3,4,1,5,2};
    reversearr(brr, 5);
    reversearr(arr, 6);
     printarr(arr,6);
     printarr(brr, 5);
}