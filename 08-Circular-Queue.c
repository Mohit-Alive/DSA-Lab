#include <stdio.h>
#define MAX 5

int queue[MAX], front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % MAX == front)
        printf("Queue overflow\n");
    else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        queue[rear] = value;
        printf("Enqueued %d\n", value);
    }
}

void dequeue() {
    if (front == -1)
        printf("Queue underflow\n");
    else {
        printf("Dequeued %d\n", queue[front]);
        if (front == rear) // Queue becomes empty
            front = rear = -1;
        else
            front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1)
        printf("Queue is empty\n");
    else {
        printf("Queue elements: ");
        // int i = front;
        while (front != rear) {
            printf("%d ", queue[front]);
            front = (front + 1) % MAX;
        }
        printf("%d\n", queue[front]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    dequeue();
    display();
    return 0;
}
