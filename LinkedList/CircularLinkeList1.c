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

    if (head == NULL && position == 0) {
        head = newNode;
        newNode->next = head;
    }
    else if (position == 0) {
        insertAtBeginning(data);
    }
    else {
        struct Node* temp = head;
        int i = 0;
        while (i < position - 1) {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteFromBeginning()
{
    if (head == NULL) {
        return;
    }
    else if ((head)->next == head) {
        free(head);
        head = NULL;
    }
    else {
        struct Node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }
        temp->next = (head)->next;
        struct Node* toDelete = head;
        head = (head)->next;
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
        struct Node* secondLast = head;
        while (secondLast->next->next != head) {
            secondLast = secondLast->next;
        }
        struct Node* last = secondLast->next;
        secondLast->next = head;
        free(last);
    }
}

void deleteAtPosition(int position)
{
    if (head == NULL) {
        return;
    }
    else if (position == 0) {
        deleteFromBeginning(head);
    }
    else {
        struct Node* temp = head;
        int i = 0;
        while (i < position - 1) {
            temp = temp->next;
            i++;
        }
        struct Node* toDelete = temp->next;
        temp->next = temp->next->next;
        free(toDelete);
    }
}

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
    printf("HEAD\n");
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