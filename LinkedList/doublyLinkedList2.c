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
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode -> data = value;
   newNode -> next = NULL;
   if(head == NULL)
   {
      newNode -> previous = NULL;
      head = newNode;
   }
   else
   {
      struct Node *temp = head;
      while(temp -> next != NULL)
         temp = temp -> next;
      temp -> next = newNode;
      newNode -> previous = temp;
   }
   printf("\nInsertion success!!!");   
}
void insertAfter(int value, int location)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode -> data = value;
   if(head == NULL)
   {
      newNode -> previous = newNode -> next = NULL;
      head = newNode;
   }
   else
   {
      struct Node *temp1 = head, temp2;
      while(temp1 -> data != location)
      {
         if(temp1 -> next == NULL)
         {
            printf("Given node is not found in the list!!!");
            goto EndFunction;
         }
         else
         {
            temp1 = temp1 -> next;
         }
      }
      temp2 = temp1 -> next;
      temp1 -> next = newNode;
      newNode -> previous = temp1;
      newNode -> next = temp2;
      temp2 -> previous = newNode;
      printf("\nInsertion success!!!");
   }
   EndFunction:
}
void deleteBeginning()
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp = head;
      if(temp -> previous == temp -> next)
      {
         head = NULL;
         free(temp);
      }
      else{
         head = temp -> next;
         head -> previous = NULL;
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
      struct Node *temp = head;
      if(temp -> previous == temp -> next)
      {
         head = NULL;
         free(temp);
      }
      else{
         while(temp -> next != NULL)
            temp = temp -> next;
         temp -> previous -> next = NULL;
         free(temp);
      }
      printf("\nDeletion success!!!");
   }
}
void deleteSpecific(int delValue)
{
   if(head == NULL)
      printf("List is Empty!!! Deletion not possible!!!");
   else
   {
      struct Node *temp = head;
      while(temp -> data != delValue)
      {
         if(temp -> next == NULL)
         {
            printf("\nGiven node is not found in the list!!!");
            goto FuctionEnd;
         }
         else
         {
            temp = temp -> next;
         }
      }
      if(temp == head)
      {
         head = NULL;
         free(temp);
      }
      else
      {
         temp -> previous -> next = temp -> next;
         free(temp);   
      }
      printf("\nDeletion success!!!");
   }
   FuctionEnd:
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