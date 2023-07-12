#include<iostream>
using namespace std;
struct BstNode { 
    int data;
    BstNode* left;
    BstNode* right;

};


BstNode* GetNewNode(int data){
    BstNode* newNode = (BstNode*)malloc(sizeof(BstNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;


}
BstNode* Insert(BstNode* root , int data){
    if(root ==NULL){
        root = GetNewNode(data);
        return root;
    }
    else if(data <= root->data){
        root->left = Insert(root->left , data);
        
    }
    else{
        root->right = Insert(root->right , data);
    }
    return root;

}
int FindHeight(BstNode* root){
    if(root == NULL){
        return -1;
    }
   return max(FindHeight(root->left),FindHeight(root->right))+1;

}
int main(){
    BstNode* root = NULL;
    root = Insert(root , 10);
    root = Insert(root ,30);
    root = Insert(root ,20);
    int a= FindHeight(root);
    cout<<a<<endl;
    

}