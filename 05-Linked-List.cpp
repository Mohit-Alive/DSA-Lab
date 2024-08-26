#include <stdio.h>
#include <stdlib.h>

struct node {
    int info;
    struct node* link;
};
struct node* start = NULL;

void createList(){
    if (start == NULL) {
        int n;
        printf("\nEnter the number of nodes: ");
        scanf("%d", &n);
        if (n != 0) {
            int data;
            struct node* newnode;
            struct node* temp;
            newnode = malloc(sizeof(struct node));
            newnode->link = NULL;
            start = newnode;
            temp = start;
            printf("\nEnter number to"
                   " be inserted : ");
            scanf("%d", &data);
            start->info = data;

            for (int i = 2; i <= n; i++) {
                newnode = malloc(sizeof(struct node));
                newnode->link = NULL;
                temp->link = newnode;
                printf("\nEnter number to"
                       " be inserted : ");
                scanf("%d", &data);
                newnode->info = data;
                temp = temp->link;
            }
        }
        printf("\nThe list is created\n");
    }
    else
        printf("\nThe list is already created\n");
}
void traverse()
{
    struct node* temp;

    // List is empty
    if (start == NULL)
        printf("\nList is empty\n");

    // Else print the LL
    else {
        temp = start;
        while (temp != NULL) {
            printf("Data = %d\n", temp->info);
            temp = temp->link;
        }
    }
}

void insertAtEnd()
{
    int data;
    struct node *temp, *head;
    temp = malloc(sizeof(struct node));

    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);

    temp->link = 0;
    temp->info = data;
    head = start;
    while (head->link != NULL) {
        head = head->link;
    }
    head->link = temp;
}

void insertAtFront()
{
    int data;
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to"
           " be inserted : ");
    scanf("%d", &data);
    temp->info = data;

    temp->link = start;
    start = temp;
}

void insertAtPosition()
{
    struct node *temp, *newnode;
    int pos, data, i = 1;
    newnode = malloc(sizeof(struct node));

    printf("\nEnter position and data :");
    scanf("%d %d", &pos, &data);

    temp = start;
    newnode->info = data;
    newnode->link = 0;
    while (i < pos - 1) {
        temp = temp->link;
        i++;
    }
    newnode->link = temp->link;
    temp->link = newnode;
}
 
 int main(){
    createList();
    int choice;
    
    while(1){
        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at"
               " starting\n");
        printf("\t3 For insertion at"
               " end\n");
        printf("\t4 For insertion at "
               "any position\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
        
        
        switch (choice) {
            case 1:
                traverse();
                break;
            case 2:
                insertAtFront();    
                break;
            case 3:
                insertAtEnd();
                break;
            case 4:
                insertAtPosition();
            default:
                printf("Incorrect Choice\n");
        }
    }

    return 0;
 }
