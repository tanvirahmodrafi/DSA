#include <bits/stdc++.h>
using namespace std;
struct stacks {
    int top;
    int size;
    int *arr;
};
struct stacks* createStack(int value){
    struct stacks *stack = new stacks;
    stack->top = -1;
    stack->size = value;
    stack-> arr = new int[stack->size];
    return stack;
}
int isEmpty(struct stacks * ptr){
    if(ptr->top == -1){
        cout<< "empty\n";
        return 1;
    }
    cout << "Not empty\n";
    return 0;
}
int isFull(struct stacks* ptr){
    if (ptr->top == (ptr->size)-1){
        cout << "Stacks full\n";
        return 1;
    }
    cout<< "Stacks is not full\n";
    return 0;
}
void push(struct stacks* ptr,int val){
    if(ptr->top == (ptr->size)-1){
        cout<< "Stacks full\n";
        return;
    }
    ptr->top++;
    ptr->arr[ptr->top] = val;
}
void pop(struct stacks* ptr){
    if(ptr->top == -1){
        cout<< "Stacks empty\n";
        return;
    }
    ptr->top--;
}
void peek(struct stacks* ptr){
    if(ptr->top == -1){
        cout<< "Stacks empty\n";
        return;
    }
    cout<<ptr->arr[ptr->top];
}
void display(struct stacks *ptr)
{
    for (int i = 0; i <= ptr->top; i++)
    {
        cout << ptr->arr[i] << " ";
    }
}
void newpush(struct stacks* ptr, int value) {
    if (isFull(ptr)) {
        cout << "Full";
        return;
    }

    push(ptr, value);
    
    sort(ptr->arr,ptr->arr+ptr->top+1);
}
void firstTolast(struct stacks* ptr){
    int temp = ptr->arr[ptr->top];
    int aer[ptr->size];
    aer[0] = temp;
    for (int i = 1; i < ptr->size; i++)
    {
        aer[i] = ptr->arr[i-1];
    }
    for (int i = 0; i < ptr->size; i++)
    {
        cout<<aer[i]<<' ';
    }
}
int main(){
    struct stacks* ptr = createStack(4);
    push(ptr,2);
    push(ptr,3);
    push(ptr,7);
    push(ptr,1);
    peek(ptr);
    // firstTolast(ptr);
}

