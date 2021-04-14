#include<stdio.h>
#include<stdlib.h>
struct Tree{
    int data;
    struct Tree* leftChild;
    struct Tree* rightChild;
};

struct Tree* newNode(int data){
    struct Tree* root = (struct Tree*)malloc(sizeof(struct Tree));
    root->data = data;
    root->leftChild=root->rightChild = NULL;
    return root;
}

int heightOfTree(struct Tree* root){
    if(root==NULL){
        return 0;
    }
    int Leftheight = heightOfTree(root->leftChild);
    int Rightheight = heightOfTree(root->rightChild);
    return Leftheight > Rightheight  ? Leftheight+1:Rightheight+1;
}

int main(){
    struct Tree* root = newNode(1);
    root->leftChild = newNode(2);
    root->rightChild = newNode(3);
    int height = heightOfTree(root);
    printf("%d",height);
    return 0;
}