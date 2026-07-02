#include<stdio.h>
struct Node {
    int data;
    struct Node* next;
    struct Node *prev;
};
// forward -> backward 

struct Node *head = NULL;
void insertAtBeginning(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data= data;
    newnode->next = newnode->prev=NULL;
    if (head == NULL)
    {
        head = newnode;
    }
    else 
    {
        newnode->next = head ; //10 -> 1
        head->prev = newnode ; //10 <- 1
    }
}
void insertAtEnd(int value)
{
   struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode -> data = value;
   newNode -> next = NULL;
   newNode -> prev = NULL;
   if(head == NULL)
      head = newNode;
   else
   {
      //  1 2 3 4 -> 5
      //          <-
      struct Node *temp = head;
      while(temp -> next != NULL)
         temp = temp -> next;
      temp -> next = newNode;
      newNode -> prev = temp;
   }
   printf("\nInsertion success!!!");   
}
void insertAfter(int value, int pos)
{
   struct Node *newNode= (struct Node*)malloc(sizeof(struct Node));
   newNode -> data = value;
   newNode -> prev = newNode -> next = NULL;
   if(head == NULL)
      printf("List is Empty \n");
   else if (pos < 1)
      printf("Invalid Postion given ");
   else
   {
      struct Node *temp1 = head, *temp2;
      int count=1;
      while(count <pos -1 && temp1 != NULL)
      {
            temp1 = temp1 -> next;
            count++;
      }
      if (temp1 == NULL)
         printf("Invalid position\n");
      else{
      temp2 = temp1 -> next;
      temp1 -> next = newNode;
      newNode -> prev = temp1;
      newNode -> next = temp2;
      if(temp2 != NULL)
         temp2 -> prev = newNode;
      }
   }
}
void deleteBeginning()
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp = head;
      if(head->next == NULL)
      {
         head = NULL;
         free(temp);
      }
      else{
         head = head -> next;
         head -> prev = NULL;
         free(temp);
      }
      printf("\nDeletion success!!!");
   }
}
void deleteEnd()
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp = head, *temp2;
      if(head->next == NULL)
      {
         head = NULL;
         free(temp);
      }
      else{
         // 1 2 3 4
         //     t t2
         while(temp -> next ->next != NULL) // # stop at second last postion 
            temp = temp -> next;
         temp2 = temp->next ; //temp2 belongs to  last node   
         free(temp2 );
         temp->next = NULL; // second last is now last Node  
         }
      printf("\nDeletion success!!!");
   }
}
void deleteposition(int pos)
{
   if (head == NULL)
      printf("List is Empty \n");
   else if (pos <1)
      printf("Invalid position\n");
   else{
      struct Node *temp = head, *temp2;
      int i=1;
      while(i <pos -1 && temp != NULL)
      {
         temp = temp->next;
         i++;   
      }
      // pos invalid 
      if (temp == NULL)
         printf("position invalid ");
      else
      {
         temp2= temp->next; 
         temp->next = temp2->next;
         if (temp->next!=NULL)
            temp2->next->prev = temp; 
         free(temp2);
      }
   }
}
void reverse()
{
    Node* current = head;
    Node* temp = NULL;
    // Swap next and prev for all nodes
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev; // Move to next node (which is prev now)
    }

    // Adjust head pointer
    if (temp != NULL) {
        head = temp->prev;
    }
}
void display()
{
   if(head == NULL)
      printf("\nList is Empty!!!");
   else
   {
      struct Node *temp = head;
      printf("\nList elements are: \n");
      printf("NULL <--- ");
      while(temp -> next != NULL)
      {
         printf("%d <===> ",temp -> data);
      }
      printf("%d ---> NULL", temp -> data);
   }
}
int main()
{
    insertAtBeginning(100);
    insertAtBeginning(200);
    insertAtBeginning(300);
    display();
}