#include<iostream>
using namespace std;
int factorial(int n){
    int f=1;
   // cin>>n;
    for(int i=n;i>=1;i--){
        f=f*i;
    }
    return f;

}
int nCr(int n,int r){
    int num=factorial(n);
    int denum=factorial(r)*factorial(n-r);
    return num/denum;
}
int main(){
    int n,r;
    cout<<"ENter n and r :";
    cin>>n>>r;

   
cout<<"FActorial"<<factorial(n);
  //  cout<<"ANswer of the combination :"<<nCr(n,r);
    
}