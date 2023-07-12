/*program to find min , max , and to search a given number in a bst*/
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
bool Search(BstNode* root , int data){
    if(root == NULL){
        return false;
    }
    else if(root->data == data)
    return true;
    else if (data<= root->data)
    return Search(root->left,data);
    else 
    return Search(root-> right , data);
}int main(){
    BstNode* root = NULL;
    root = Insert(root , 10);
    root = Insert(root ,10);
    root = Insert(root ,20);
    int a = FindMax(root);
    cout<<a<<endl;
    int b = FindMin(root);
    cout<<b;
}
