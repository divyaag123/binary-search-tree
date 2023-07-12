/*program to delete a node from binary search tree*/
#include<iostream>
using namespace std;
struct node{
    int data;
    node * right ;
    node* left;
};
node* getRootnode(int data){
    struct node* temp = (node*)malloc(sizeof(struct node));
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;



}
node * insert(node* root , int data){
    if(root == NULL){
        getRootnode( data);
    }
    if(data <= root-> data){
        root->left = insert(root->left , data);
    }
    else if(data> root->data){
        root->right = insert(root->right , data);


    }
    return root ; 
}
node * FindMin(node* root){
    
    while(root->left !=NULL){
        root = root->left;
    }
    return root ;
}
struct node* Delete(struct node * root , int data){
    if(root == NULL){
        return root;
    }
    else if( data<root ->data)
    root->left = Delete(root->left , data);
    else if(root->data>data){
        root->right = Delete(root->right , data);

    }
    else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        }
        else if(root->left == NULL){
            struct node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL){
            struct node *temp = root;
            root = root->left;
            delete temp;
        }
        else{
            struct node* temp =  FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right , data);
        }

    }
    return root;

}
int main(){
    struct node* root = (node* )malloc(sizeof(struct node));
    root = getRootnode(5);
    root = insert(root , 7);
    root = insert(root , 17);
    root = insert(root , 4);
    root = insert(root , 19);
    root = Delete(root , 5);


    
}
