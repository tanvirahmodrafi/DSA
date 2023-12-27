#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insert(Node* &head, int val)
{
    Node *n = new Node(val);
    Node *temp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void Display(Node* &head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout<< "NULL"<<'\n';
}

void insertHead( Node* &head, int val){
    Node* n = new Node(val); 
    n ->next = head;
    head = n;

}


int main(void){
    Node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insertHead(head,4);
    Display(head);

}