#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int v,Node* n=nullptr){
    val=v;
    next=n;
  }
};
Node* LinkedList(vector<int> arr){
  Node* head= new Node(arr[0]);
  Node* prev=head;
  for(int i=1;i<arr.size();i++){
    Node* temp= new Node(arr[i]);
    prev->next=temp;
    prev=temp;
  }
  return head;
}
Node* deleteLL(Node* head){
  Node* temp=head->next;
  head=temp;
  return head;
}
void printLL(Node* head){
  Node* temp=head;
  while(temp){
    cout<<temp->val<<" ";
    temp=temp->next;
  }
}
int main(){
  vector<int>arr={1,2,3,4,5};
  Node* head=LinkedList(arr);
  Node* newHead=deleteLL(head);
  printLL(head);
}