#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

struct Node* createNode(int data){
    Node* temp = (Node*)malloc(sizeof(Node));
    temp->data=data;
    temp->next = NULL;
    return temp;
}


void insertNode(Node** root,int data){
    if(*root ==NULL){
        (*root )= createNode(data);
        return;
    }
    else{
        Node* temp = createNode(data);
        Node* curr = (*root);
        while(curr->next!=NULL){
            curr = curr->next;
        }
        curr->next = temp;
        return;
    }
}


void middleElement(Node* root){
    Node* ptr1 = root;
    Node* ptr2 = root;

    if(root == NULL){
        printf("-1");
        return;
    }
else{


    while(ptr1!=NULL&&ptr1->next!=NULL){
        ptr1=ptr1->next->next;
        ptr2=ptr2->next;
    }
    printf("%d",ptr2->data);
}
}


void printList(Node* head){
    Node* temp = head;
    while(temp){
        printf("%d",temp->data);
        temp=temp->next;
    }
}

int main()
{
    Node* head= NULL;
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        int data;
        scanf("%d",&data);
        insertNode(&head,data);
    }
    
    middleElement(head);
    return 0;
}