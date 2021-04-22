#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* createNode(int data){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next=NULL;
    return temp;
}

void insertNode(struct Node** head,int data){
    if(*head == NULL){
        *head = createNode(data);
        
    }
    else{
        struct Node* temp = createNode(data);
        temp->next = *head;
        *head = temp;
    }
}

void printList(struct Node* head){
    struct Node* root = head;
    while(root!=NULL){
        printf("%d",root->data);
        root=root->next;
    }
}

struct Node* mergeTwo(struct Node** root11,struct Node** root12){
     
     struct Node* head1 = *root11;
     struct Node* head2 = *root12;
     struct Node* head3 = (struct Node*)malloc(sizeof(struct Node));
     struct Node* curr = head3;

     if(head1==NULL){
         return head2;
     }
     if(head2 == NULL){
         return head1;
     }

     while(head1&&head2){
         if(head1->data > head2->data){
             curr->next = head2;
             curr = curr->next;
             head2 = head2->next;
         }
         else{
             curr->next = head1;
             curr = curr->next;
             head1= head1->next;
         }
     }
     while(head1){
         curr->next = head1;
         curr=curr->next;
         head1= head1->next;
     }
     while(head2){
         curr->next = head2;
         curr=curr->next;
         head2= head2->next;
     }

     return head3->next;
   
}

int main()
{
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    int N,M;
    scanf("%d %d",&N,&M);

    for(int i=0;i<N;i++){
        int data;
        scanf("%d",&data);
        insertNode(&head1,data);
    }
    
    for(int i=0;i<M;i++){
        int data;
        scanf("%d",&data);
        insertNode(&head2,data);
    }
    
    struct Node* result = mergeTwo(&head1,&head2);

    printList(result);
   
    return 0;
}