#include <bits/stdc++.h>
using namespace std;
struct Node
{
   int value;
   struct Node *next;
};

struct Node *insertAtFirst(struct Node *head, int value)
{
   struct Node *temp = new Node;
   temp->value = value;
   temp->next = head;
   head = temp;
   return head;
}

struct Node *insertAtInBetween(struct Node *head, int value, int index)
{
   struct Node *temp = new Node;
   struct Node *t = head; // creating a dummy head
   int i = 0;
   while (i != index - 1)
   {
      t = t->next;
      i++;
   }
   temp->value = value;
   temp->next = t->next;
   t->next = temp;
   return head;
}

struct Node *insertAtLast(struct Node *head, int value)
{
   struct Node *temp = new Node;
   struct Node *t = head;
   while (t->next != NULL)
   {
      t = t->next;
   }
   t->next = temp;
   temp->value = value;
   temp->next = NULL;
   return head;
}

void displayNode(struct Node *head)
{
   while (head != NULL)
   { // untill head is not
      cout << head->value << '\n';
      head = head->next; // Shifting the head to the next node
   }
}

struct Node *deleteHead(struct Node *head)
{
   head = head->next;
   return head;
}

struct Node *deleteAtTail(struct Node *head)
{
   struct Node *point = head;
   while (point->next->next != NULL)
   {
      point = point->next;
   }
   point->next = NULL;
   return head;
}

int main(void)
{
   struct Node *head = NULL;

   head = insertAtFirst(head, 1);
   head = insertAtFirst(head, 10);
   head = insertAtLast(head, 5);
   head = insertAtLast(head, 6);
   displayNode(head);
}