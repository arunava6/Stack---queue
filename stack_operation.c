// stack using Linked list
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void push(struct node **top,int value){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=(*top);
    *top=newnode;
}
int pop(struct node **top){
    if((*top)==NULL)
    printf("\nUNDERFLOW!");
    struct node *temp=(*top);
    *top=temp->next;
    int var=temp->data;
    free(temp);
    return var;
}
void display(struct node *top){
    if(top==NULL)
    printf("The stack is empty!");
    else{
        struct node *current=top;
        while (current!=NULL) {
            printf("%d ",current->data);
            current=current->next;
        }
    }
}
int main(){
    struct node *top=NULL;
    int n;
    printf("How many elements you want to insert: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int value;
        printf("The elements inserted at position %d : ",i+1);
        scanf("%d",&value);
        push(&top,value);
    }
    printf("The stack are: ");
    display(top);
    printf("\nPop element from the stack: %d",pop(&top));
    printf("\nPop element from the stack: %d",pop(&top));
}














// #include<stdio.h>
// #define SIZE 10
// int arr[SIZE],top=-1;
// void push(int value){
//     if(top==SIZE-1){
//         printf("Stack Overflow");
//     }else{
//         top=top+1;
//         arr[top]=value;
//     }
// }
// int pop(){
//     if(top==-1){
//         printf("\n Stack Underflow\n");
//     }else{
//         printf("Pop from the stack %d\n",arr[top]);
//         return arr[top--];
//     }
// }
// void peek(){
//     printf("The stack are: ");
//     for(int i=top;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int n;
//     printf("How many elements you want to insert: ");
//     scanf("%d",&n);
//     int value;
//     for(int i=0;i<n;i++){
//         scanf("%d",&value);
//         push(value);
//     }
//     if(top==-1){
//         printf("Empty Stack\n");
//     }else{
//         peek();
//     }
//     pop();
//     pop();
// }

