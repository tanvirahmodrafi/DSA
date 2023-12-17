#include <bits/stdc++.h>
using namespace std;

struct node
{
    int value;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;
struct node *tail = NULL;

void insertAtHead(int val)
{
    struct node *temp = new node;
    temp->value = val;
    temp->prev = NULL;
    temp->next = head;

    if (head != NULL)
    {
        head->prev = temp;
        
    }
    if(head == NULL){
        tail = temp;
    }

    head = temp;
}

void insertAtTail(int val)
{
    struct node *temp = new node;
    temp->value = val;
    temp->next = NULL;
    temp->prev = tail;
    tail = temp;
}

void insertAtK(int val, int k)
{
    struct node *temp = new node;
    temp->value = val;
    struct node *cur = head;

    for (int i = 1; i < k - 1; i++)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    temp->prev = cur;
    cur->next->prev = temp;
    cur->next = temp;
}

void display()
{
    struct node *cur = head;
    while (cur != NULL)
    {
        cout << cur->value << " ";
        cur = cur->next;
    }
}

int main(){
    insertAtHead(1);
    insertAtTail(2);
    display();
    cout << tail << '\n';
    cout<< head << '\n';
    insertAtTail(3);
    cout << tail;
    return 0;
}