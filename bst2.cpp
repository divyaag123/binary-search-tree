#include<iostream>
using namespace std;
struct BstNode{
    int data;
    BstNode* right;
    BstNode* left;
};
BstNode* GetNewNode( int data){
    BstNode* node = (BstNode*)malloc(sizeof(BstNode*));
    node->data = data;
    node->right = node->left = NULL;
    return node;
}
BstNode* Insert(BstNode* root , int data){
    if(root == NULL){
        root = GetNewNode( data);
        return root;
    }
    else if(root->data <= data){
        root->left = Insert(root->left , data);
        
    }
    else if(root->data> data){
        root->right = Insert(root-> right , data);
    }
    return root;

}

int FindMin(BstNode* root){
    if(root == NULL){
        cout<<"Error : Tree is empty\n";
        return -1;
    }while(root->left !=NULL){
        root = root->left;
    }
    return root ->data;
}
int FindMax(BstNode* root){
    if(root == NULL){
        cout<<"Error: Tree is Empty\n";
        return -1;
    }
    while(root->right != NULL){
        root = root->right;
    }
    return root->data;
}
int main(){
    BstNode* root = NULL;
    
    root = Insert(root , 5);
    root = Insert(root , 8);
    root = Insert(root , 7);

    int a = FindMax(root);
    cout<<"Max Element is "<<a<<endl;


}