#include <bits/stdc++.h>
using namespace std;
struct node
{
    int val;
    struct node *next;
};
struct node *head = NULL;

void insertAtHead(int val)
{
    struct node *temp = new node;
    temp->val = val;

    if (head == NULL)
    {
        temp->next = temp;
    }
    else
    {
        temp->next = head;
        struct node *cur = head;
        while(cur->next != head){
            cur = cur->next;
        }
        cur->next = temp; 
    }
    head = temp;
}
void display()
{
    struct node *cur = head;
    do
    {
        cout << cur->val << " ";
        cur = cur->next;
    } while (cur != head);
}
void insertAtK(int val,int pos){
    struct node *temp = new node;
    struct node *cur = head;
    temp->val = val;
    if(cur == NULL){
        cout<< "ERROR";
        return;
    }
    if(pos == 1){
        insertAtHead(val);
        return;
    }
    for (int i = 1; i < pos-1; i++)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    cur->next = temp;
}
void insertAtTail(int val){
    struct node *temp = new node;
    struct node *cur = head;
    temp->val = val;
    while(cur->next != head){
        cur = cur->next;
    }
    temp->next = head;
    cur->next = temp;
}
void deleteAtTail(){
    struct node *cur = head;
    struct node *cur2 = head;
    while(cur->next->next != head){
        cur = cur->next;
    }
    cur2 = cur->next;
    cur->next = head;
    delete cur2;
}

void deleteAtHead(){
    struct node *cur = head;
    struct node *cur2 = head;
    while(cur->next != head){
        cur = cur->next;
    }
    cur->next = head->next;
    head = head->next;
    delete cur2;
}
void deleteAtK(int pos){
    struct node *cur = head;
    struct node *cur2;
    if(cur == NULL){
        cout<< "ERROR";
        return;
    }
    if(pos == 1){
        deleteAtHead();
        return;
    }
    for (int i = 1; i < pos-1; i++)
    {
        cur = cur->next;
    }
    cur2 = cur->next;
    cur->next = cur->next->next;
}

int main()
{
    insertAtHead(5);
    insertAtHead(6);
    insertAtHead(4);
    insertAtHead(12);
    insertAtHead(2);
    insertAtHead(0);
    insertAtK(1,2);
    insertAtTail(9);
    deleteAtTail();
    deleteAtHead();
    deleteAtK(4);
    display();
    return 0;
}
