#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1)
        printf("Queue overflow\n");
    else {
        if (front == -1 && rear == -1){             // Queue is empty
            front++;
            rear++;
            queue[rear] = value;
        }
        else {                                      // Queue is not empty
            rear++;
            queue[rear] = value;
            printf("Enqueued %d\n", value);
        }
    }
}

void dequeue() { 
    if (front == -1 || front > rear)               // Queue is empty
        printf("Queue underflow\n");
    else
        printf("Dequeued %d\n", queue[front++]);   // Queue is not empty
}

void display() {
    if (front == -1 || front > rear)
        printf("Queue is empty\n");
    else {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(20);
    dequeue();
    dequeue();
    display();
    return 0;
}
