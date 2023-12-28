#include <bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insertAtHead(int value)
{
    struct node *temp = new node;
    temp->value = value;
    temp->next = head;
    temp->prev = NULL;
    if(head != NULL){
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(int value){
    if(head == NULL) insertAtHead(value);return;
    struct node *temp = new node;
    temp->value = value;
    temp->next = NULL;
    struct node *cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next = temp;
    temp->prev = cur;
}

void inserAtK(int value,int k){
    struct node *temp = new node;
    struct node* cur = head;
    temp->value = value;
    for (int i = 1; i < k-1; i++)
    {
        cur = cur->next;
    }
    temp->next = cur->next;
    temp->prev = cur;
    cur ->next = temp;
    temp->next->prev = temp;
}

void display(){
    struct node* cur = head;
    while(cur!= NULL){
        cout<<cur->value<<' ';
        cur = cur->next;
    }
}

void deleteAtK(int k){
    struct node *cur = head;
    for (int i = 1; i < k-1; i++)
    {
        cur = cur->next;
    }
    cur->next = cur->next->next;
    cur->next->prev = cur;
}

void deleteAtHead(){
    head = head->next;
    head->prev = NULL;
}

void deleteAtTail(){
    struct node *cur = head;
    while(cur->next->next != NULL){
        cur = cur->next;
    }
    cur->next = NULL;
}

int main()
{
    insertAtHead(4);
    
    insertAtHead(5);
    display();cout<<'\n';
    insertAtHead(6);
    insertAtTail(10);
    inserAtK(1,2);
    display();cout<<'\n';
    deleteAtK(1);
    display();cout<<'\n';
    deleteAtHead();
    display();cout<<'\n';
    deleteAtTail();
    display();cout<<'\n';
    

    return 0;
}