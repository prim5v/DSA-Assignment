#include <stdio.h>

#define MAX 5
int queue[MAX];
int front = -1, rear = -1;

int isFull(void) {
    return rear == MAX -1;
}

int isEmpty(void) {
    return front == -1 && rear == -1;
}

void enqueue(int x){
    if(isFull()){
        printf("The Q is full!!\n");
        return;
    }
    if(front == -1) front = 0;
    rear++;
    queue[rear] = x;
    printf("%d has been Queued!!\n", x);
}

int dequeue(void){
    if(isEmpty()){
        printf("The Q is empty!!\n");
        return -1;
    }
    int x = queue[front];
    front++;
    if (front > rear) front = rear = -1;
    printf("%d has been Dequeued!!\n", x);
    return x;
}

int main(void){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    
    return 0;
}