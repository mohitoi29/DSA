#include<bits/stdc++.h>
using namespace std;
class TreeNode{
  public:
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode(int v,TreeNode* l=nullptr,TreeNode* r=nullptr){
    val=v;
    left=l;
    right=r;
  }
};
TreeNode* createNode(vector<int> arr){
  TreeNode* root=new TreeNode(arr[0]);
  queue<TreeNode*> q;
  q.push(root);
  int i=1;
  while(i<arr.size()){
    TreeNode* curr=q.front();
    q.pop();
    if(i<arr.size()){
      curr->left=new TreeNode(arr[i++]);
      q.push(curr->left);
    }
    if(i<arr.size()){
      curr->right=new TreeNode(arr[i++]);
      q.push(curr->right);
    }
  }
  return root;
}
void Levelorder(TreeNode* root){
  if(root==nullptr)return;
  queue<TreeNode*> q;
  q.push(root);
  while(!q.empty()){
    TreeNode* curr=q.front();
    q.pop();
    cout<<curr->val<<" ";
    if(curr->left){
      q.push(curr->left);
    }
    if(curr->right){
      q.push(curr->right);
    }
  }
}
void printInOrder(TreeNode* root){
  if(root==nullptr)return;
  printInOrder(root->left);
  printInOrder(root->right);
  cout<<root->val<<" ";
 
} 
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    TreeNode* root=createNode(arr);
    Levelorder(root);
}