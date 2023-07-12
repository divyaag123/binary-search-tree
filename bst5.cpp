/*to check whether given tree is bst or not method */
#include<iostream>
using namespace std;
#define INT_MAX 100
#define INT_MIN  0


struct BstNode{
    int data;
    BstNode* right;
    BstNode* left;
};
bool isBstUtil(BstNode* root , int min , int max ){
    if(root == NULL)return true;

    if(root->data > min && root->data < max && 
     isBstUtil(root->left , min , root->data) && isBstUtil(root->right , max , root->data) )
     return true;
    else 
    false;

}
bool isBst(BstNode* root){
    return isBstUtil(root ,INT_MIN , INT_MAX);
}
int main(){

}
