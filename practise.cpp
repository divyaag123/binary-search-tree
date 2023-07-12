#include<iostream>
using namespace std;
struct node{
    int data;
    struct node* right;
    struct node * left;

};
struct node* GetNewNode(int data){
    struct node * root = (struct node*)malloc(sizeof(struct node));
    root->data = data;
    root->left = root->right = NULL;
    return root;

}
struct node* Insert(struct node* root , int data){
    if(root==NULL){
        root = GetNewNode(data);
        
    }
    else if(root->data <= data){
        root = Insert(root->left ,  data);
    }
    else if (root->data >data)
    {
        root = Insert(root->right , data);
    }
    return root;
}
bool Search(struct node * root , int data){
    if(root==NULL){
        return false;
    }
    else if(data<=root->data){
        return Search(root->left, data);

    }
    else{
        return Search(root->right , data);
    }

}
int main(){
    struct node * root = NULL;
    root = Insert(root , 4);
    root = Insert(root , 9);
    root = Insert(root , 11);
    root = Insert(root , 3);
    root = Insert(root , 5);
    int number;
    cin>>number;
    if(Search(root , 9)==true) 
    cout<<"Found";
    else 
    cout<<"NOt Found";
    return 0;







}