#include<bits/stdc++.h>
using namespace std;
long long int squareroot(int n){
    int s=1;
    int e=n;
   long long int mid=s+(e-s)/2;
   long long int ans=-1;
    while(s<=e){
        long long int sqr=mid*mid;
        if(sqr==n){
            return mid;

        }
        else if(sqr<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
double precision(int upto,int n,int tempsol){
    double ans= tempsol;
    double factor=1;
    for(int i=0;i<upto;i++){
        factor=factor/10;
        for(int j=ans;j*j<n;j=j+factor){
            ans=j;
        }

    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter the no."<<endl;
    cin>>n;
    int tempsol=squareroot(n);
    
 
    cout<<"Precise Square root of the no. is "<<precision(3,n,tempsol);

return 0;
}