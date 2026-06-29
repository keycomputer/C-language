#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node *head = NULL;
void insertAtBeginning(int data)
{
    struct Node* newNode
        = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    }
    else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
        head = newNode;
    }
}
void insertAtEnd(int data)
{
     struct Node* newNode
        = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        newNode->next = head;
    }
    else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
}

void insertAtPosition( int data,
                      int position)
{
     struct Node* newNode
        = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if ((position < 0 )|| (head == NULL && position >0 ))
        printf("invalid position");
    else if (head == NULL && position == 0) {
        head = newNode;
        newNode->next = head;
    }
    else {
        struct Node* temp = head;
        int i = 1;
        while (i < position - 1 ) {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteFromBeginning()
{
    if (head == NULL) // Empty List
    {
        return;
    }
    else if ((head)->next == head) // one Data  
    {
        free(head);
        head = NULL;
    }
    else {
        struct Node* temp = head;
        while (temp->next != head) { // end node 
            temp = temp->next;
        }
        struct Node* toDelete = head;
        head = head->next;
        temp->next = head; // adding new head pointer       
        free(toDelete);
    }
}

void deleteFromEnd()
{
    if (head == NULL) {
        return;
    }
    else if ((head)->next == head) {
        free(head);
        head = NULL;
    }
    else {
        struct Node* temp  = head ; // start from head 
        while (temp->next->next != head) { // second last node 
            temp = temp->next;
        }
        struct Node* last = temp->next; // Last Node -> last 
        temp->next = head; // circular 
        free(last); 
///////////////////////////////////////////////
//  1, 2 , 3 , 4 
        // t2  t1
        struct Node *temp1 , *temp2 ;
        temp1 = head; // start 
        while(temp1->next!= head) // last node 
        {
            temp2 = temp1 ;       // second node 
            temp1 = temp1->next ;
        }
        temp2->next = head ;
        free(temp1);
    }
}

void deleteAtPosition(int position)
{
    if (head == NULL) {
        return;
    }
    else if(position < 0  )
        return;
    else if (position == 1) {
        deleteFromBeginning(head);
    }
    else {
        //  1   2   3   4   5 
        //          t   tD
        struct Node* temp = head;
        int i = 1;
        while (i < position - 1) {
            temp = temp->next;
            i++;
        }
        struct Node* toDelete = temp->next;
        temp->next = temp->next->next;
        free(toDelete);
    }
}
// 1 2 3 4 5 6 
// t t t t t t 
// t
void traverse()
{
    if (head == NULL) {
        return;
    }
    struct Node* temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head); 
    printf("\n");
    ///////////////////////////////////////
    // struct Node *temp = head ;
    // while(temp->next!= head)
    // {
    //     printf("%d -> ",temp->data );
    //     temp = temp->next ;
    // }
    // printf("%d \n",temp->data ); // Last node data 
       
}

int search( int key)
{
    if (head == NULL) {
        return 0;
    }
    struct Node* temp = head;
    do {
        if (temp->data == key) {
            return 1; // Key found
        }
        temp = temp->next;
    } while (temp != head);
    return 0; // Key not found
}

int main()
{
    insertAtEnd(10);
    insertAtEnd(20);
    insertAtBeginning( 5);
    insertAtPosition( 15, 2);
    insertAtPosition(25, 5);
    printf("Circular Linked List: ");
    traverse(head);

    deleteFromEnd();
    deleteAtPosition(1);

    printf("Circular Linked List after deletion: ");
    traverse(head);
    int key = 10;
    if (search(key)) {
        printf("Element %d is found in the linked list.\n",key);
    }
    else {
        printf("Element %d is not found in the linked list.\n",key);
    }

    return 0;
}