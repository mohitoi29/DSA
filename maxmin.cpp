#include<iostream>
using namespace std;
int minterm(int A[],int n){
    int min=INT32_MAX;
   for(int i=0;i<n;i++){
    if(A[i]<min)
        min=A[i];
    
   }
return min;
}

int maxterm(int A[],int n){
    int max=INT32_MIN;
    for(int i=0;i<n;i++){
        if(A[i]>max){
            max=A[i];
        }
    }
    return max;
}


int main (){
    int size;
    cout<<"Enter ther size of Array:"<<endl;
    cin>>size;
    cout<<"enter the element of the array"<<endl;
    int A[100];
    for(int i=0;i<size;i++){
        cin>>A[i]; 
    }
cout<<"Minimum element:"<<minterm(A,size)<<endl;
cout<<"Maximum element is "<<maxterm(A,size)<<endl;

}