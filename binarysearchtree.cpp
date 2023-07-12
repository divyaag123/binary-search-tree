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
    int number;
    cout<<"Enter number is searched\n";
    cin>>number;
    if(Search(root, number)==true)cout<<"Found\n";
    else cout<<"Not Found\n";
}
