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

void insertAtHead(int value)
{
    struct node *temp = new node;
    temp->value = value;
    
    if (head != NULL)
    {
        temp->prev = tail;
        temp->next = head;
        tail->next = temp;
        head->prev = temp;
    }else{
        temp->next = temp;
        temp->prev = temp;
        tail = temp;
    }
    head = temp;
}
void insertAtTail(int value){
    struct node *temp = new node;
    temp->value = value;
    temp->next = head;
    temp->prev = tail;
    tail->next = temp;
    head->prev = temp;
    tail = temp;
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
    while(cur!= tail){
        cout<<cur->value<<' ';
        cur = cur->next;
    }
    cout << tail->value;
    
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
    head->prev = tail;
}

void deleteAtTail(){
    tail = tail->prev;
    tail->next = head;
}


int main()
{
    insertAtHead(4);
    insertAtHead(5);
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