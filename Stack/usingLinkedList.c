#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
// LIFO => head
struct node *head = NULL;
void push(int val) // begining
{
    //create new node
    struct node *newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = val;
    newNode->next = NULL; 
    if(head == NULL)
        head == newNode ;
    else{
        newNode->next = head;
        head = newNode;
    }
}
void pop() // delete at begin 
{
    struct node *temp;
    if(head == NULL)
        printf("Stack is Empty\nUnderFlow\n");
    else
    {
        printf("Deleted element = %d\n", head->data);
        temp = head;
        head = head->next;
        free(temp);
    }
}

void printList()
{
    struct node *temp = head;
    while(temp != NULL)
    {
         printf("%d->", temp->data);
         temp = temp->next;
    }
    printf("NULL\n");
}
void peek() { 
    if(head == NULL)
        printf("\nSTACK is Empty \n");
    else
        printf("Top Data - %d\n", head ->data );
}
int main()
{
    push(10);
    push(20);
    push(30);
    printf("Linked List\n");
    printList();
    pop();
    printf("After the pop, the new linked list\n");
    printList();
    pop();
    printf("After the pop, the new linked list\n");
    printList();

    return 0;
}