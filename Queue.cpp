#include <bits/stdc++.h>
using namespace std;
struct kew {
    int size;
    int front;
    int rear;
    int occupied;
    int *arr;
};

struct kew* creatQueue(int val){
    struct kew* queue = new kew;
    queue->front = 0;
    queue->size = val;
    queue->occupied = 0;
    queue->rear = 0;
    queue->arr = new int[val];
    return queue;
}

int isEmpty(struct kew* ptr){
    return ptr->occupied == 0;
}

int isFull(struct kew* ptr){
    return ptr->occupied == ptr->size;
}

void enqueue(struct kew* ptr,int val){
    if(isFull(ptr)){
        cout<<"Full";
        return;
    }
    ptr->arr[ptr->rear] = val;
    ptr->rear =(ptr->rear + 1)% ptr->size;
    ptr->occupied++;
}

void dequeue(struct kew* ptr){
    if(isEmpty(ptr)){
        cout<<"Empty";
        return;
    }
    ptr->front = (ptr->front+1) % ptr->size;
    ptr->occupied--;
}

int top(struct kew* ptr){
    if(isEmpty(ptr)){
        cout<<"Empty";
        return -1;
    }
    return ptr->arr[ptr->front % ptr->size];
}

void lastElement(struct kew* ptr){
    if(isEmpty(ptr)){
        cout << "Empty";
        return;
    }
    int lastIndex = (ptr->rear - 1 + ptr->size) % ptr->size;
    cout << "Last Element: " << ptr->arr[lastIndex]<<'\n';
}

void display(struct kew* ptr){
    if(isEmpty(ptr)){
        cout << "Empty";
        return;
    }
    int index = ptr->front;
    for (int i = 0; i < ptr->occupied; i++)
    {
        cout<<ptr->arr[index]<<' ';
        index = (index + 1)%ptr->size;
    } 
}
void push(kew* ptr,int val){
    kew* newq = creatQueue(ptr->size);
    enqueue(newq,val);
    while(!isEmpty(ptr)){
        enqueue(newq,top(ptr));
        dequeue(ptr);
    }
    while(!isEmpty(newq)){
        enqueue(ptr,top(newq));
        dequeue(newq);
    }
}
int main(void){
    struct kew* ptr = creatQueue(5);
    enqueue(ptr,5);
    enqueue(ptr,8);
    enqueue(ptr,0);
    enqueue(ptr,2);
    push(ptr,2);
    //dequeue(ptr);
    //top(ptr);
     lastElement(ptr);
    //display(ptr);
    // cout<<'\n';
    // push(ptr,7);
    // display(ptr);
    // dequeue(ptr);
    // display(ptr);

}