#include <stdio.h>
#include <stdlib.h>

//Singly Linked List
struct Node{
    int data;
    struct Node *next;
};

void insertAtFront(struct Node** head_ref, int new_data){
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    
    new_node -> data = new_data;

    new_node -> next = (*head_ref);

    (*head_ref) = new_node;
}

void popFront(struct Node** head_ref){
    if(*head_ref != NULL){
        struct Node* temp = *head_ref;
        *head_ref = (*head_ref) -> next;
        free(temp);
    }
}

void printAndFree(struct Node* node){
    struct Node* temp;
    while(node != NULL){
        printf("%d ",node -> data);

        temp = node;
        node = node -> next;
        free(temp);
    }
    printf("\n");
}
int main(){
    struct Node* head = NULL;
    char command;
    int val;

    while(1){
        scanf(" %c",&command);

        if(command == 'a'){
            scanf("%d", &val);
            insertAtFront(&head,val);
        }else if(command == 'p'){
            popFront(&head);
        }else if(command == 'x'){
            printAndFree(head);
            head = NULL;
            break;
        }
    }
    return 0;
}