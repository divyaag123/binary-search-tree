/* To check if the given binary tree is binary search tree or not*/
#include<iostream>
struct BstNode{
    int data;
    BstNode* right;
    BstNode* left;
};
bool isBst(BstNode* root ){
    if(root == NULL)return true;

    if(isSubtreeLesser(root->left , root->data)&&
     isSubtreeGreater(root->right,root->data) && 
     isBst(root->left) && isBst(root->right) )
     return true;
    else 
    false;

}
bool isSubtreeLesser(BstNode * root , int value){
    if(root == NULL)return true;
    if(root->data <= value && isSubtreeLesser(root->left , value)&& isSubtreeLesser(root->right , value))
    return true;
    else
    return false;

}
bool isSubtreeGreater(BstNode* root , int value){
    if(root == NULL)return true;
    if(root->data > value && isSubtreeGreater(root->left , value)&& isSubtreeGreater(root->right , value))
    return true;
    else
    return false;


}
int main(){  

}
