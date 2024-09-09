// factorial
// #include <stdio.h>
// #define MAX 100

// int top=-1;
// int stack[MAX];

// void push(int item) {
//     if(top == (MAX-1)) {
//         printf("Stack Overflow\n");
//         return;
//     }
//     stack[++top] = item;
// }

// int pop() {
//     if(top == -1) {
//         printf("Stack Underflow\n");
//         return -1;
//     }
//     return stack[top--];
// }

// int factorial(int n) {
//     for(int i=2; i<=n; i++)
//         push(i);

//     int fact = 1;
//     while(top != -1)
//         fact *= pop();

//     return fact;
// }

// int main() {
//     int num = 5;
//     printf("Factorial of %d is %d", num, factorial(num));
//     return 0;
// }








#include <stdio.h>
#define MAX 100

int top=-1;
int stack[MAX];

void push(int item) {
    if(top == (MAX-1)) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = item;
}

int pop() {
    if(top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

void fibonacci(int n) {
    push(0);
    push(1);

    for(int i=2; i<n; i++) {
        int a = pop();
        int b = pop();
        push(a);
        push(a + b);
    }

    for(int i=0; i<n; i++)
        printf("%d ", pop());
}

int main() {
    int num = 10;
    printf("First %d numbers in Fibonacci series: ", num);
    fibonacci(num);
    return 0;
}

