#include<bits/stdc++.h>

using namespace std;
int arraystl(){
       array <int,3> arr={2,43,5};
    cout<<"At 1  "<< arr.at(1)<<endl;
    cout<<"ENpty or Not "<<arr.empty()<<endl;
    cout<<"Last "<< arr.back()<<endl;
    cout<<"First"<< arr.front()<<endl;
    cout <<"Size"<<arr.size()<<endl;
}

int vectorstl(){
 
    vector<int>ves(5);//we inititalized the size of the vector
    for(int i:ves){
        cout<<i<<" ";
    }
    cout<<endl;
   vector<int>vec;//without initializing the size of the vector
   vec.push_back(5);
   vec.push_back(10);
   vec.push_back(154);
  cout<<"Capacity "<< vec.capacity()<<endl;
  //CApacity is the memory space which is created by using double method 
  cout<<"Printing VEC "<<endl;
  for(int i:vec){
    cout<<i<< " ";
  }
cout<<endl;
  cout<<"Size of both the vectors "<<vec.size()<<endl<<ves.size()<<endl;
//Using pop method and clear now
cout<<"Poping the element"<<endl;
vec.pop_back();
 for(int i:vec){
    cout<<i<< " ";
  }

  cout<<endl<<"Clearing the vector"<<endl;
  vec.clear();
   for(int i:vec){
    cout<<i<< " ";
  }
  cout<<endl;
  vec.push_back(23);
  for(int i:vec){
    cout<<i<< " ";
  }
cout<<endl<<vec.size();


}






int main(){
   arraystl();
   vectorstl();
}