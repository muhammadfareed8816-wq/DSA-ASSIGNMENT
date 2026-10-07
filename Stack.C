#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX];
int top = -1;

void push(int x) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Element %d insert nahi ho sakta.\n", x);
        return;
    }
    top++;
    stack[top] = x;
    printf("%d push ho gaya stack me.\n", x);
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! Stack khali hai.\n");
        return;
    }
    printf("%d pop ho gaya stack se.\n", stack[top]);
    top--;
}

void peek() {
    if (top == -1) {
        printf("Stack khali hai! Peek karne ke liye koi element nahi hai.\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

void display() {
    if (top == -1) {
        printf("Stack khali hai.\n");
        return;
    }
    printf("Stack elements (Top to Bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    display();
    peek();
    pop();
    display();
    return 0;
}
