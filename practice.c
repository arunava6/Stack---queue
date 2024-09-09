// //stack
// #include<stdio.h>
// #define SIZE 10
// char arr[SIZE],top=-1;
// void push(int value){
//     if(top==SIZE-1){
//         printf("\nOverflow");
//     }else{
//         top++;
//         arr[top]=value;
//     }
// }
// int pop(){
//     if (top == -1){
//         printf("\nUnderflow");
//     }else{
//         printf("The popped element is: %c",arr[top]);
//         return arr[top--];
//     }
// }
// void peek(){
//     printf("The stack are: ");
//     for(int i=top;i>=0;i--){
//         printf("%c ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int choice;
//     char value;
//     do{
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             printf("Insert element: ");
//             scanf(" %c",&value);
//             push(value);
//             break;
//             case 2:
//             pop();
//             break;
//             case 3:
//             peek();
//             break;
//             default:
//             printf("Invalid Choice!");
//         }
//     }while(choice!=4);
// }





// queue
// #include<stdio.h>
// #define SIZE 10
// int arr[SIZE];
// int front=-1,rear=-1;
// void enqueue(int value){
//     if(rear==SIZE-1){
//         printf("\nQueue Overflow\n");
//     }else{
//         if(front==-1)
//         front=0;
//         rear++;
//         arr[rear]=value;
//     }
// }
// int dequeue(){
//     if(front==-1){
//         printf("\nUnderflow");
//     }else{
//         if (front == rear)
//         front=rear=-1;
//         printf("Dequeue element is: %d",arr[front]);
//         return arr[front++];
//     }
// }
// void display(){
//     printf("The queue are: ");
//     for(int i=front;i<=rear;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         int value;
//         scanf("%d",&value);
//         enqueue(value);
//     }
//     display();
//     dequeue();
//     printf("\n");
//     dequeue();
//     printf("\n");
//     display();
// }












// #include<stdio.h>
// #define SIZE 10
// int arr[SIZE],top=-1;
// void push(int value){
//     if(top==SIZE-1){
//         printf("Overflow");
//     }else{
//         top=top+1;
//         arr[top]=value;
//     }
// }
// int pop(){
//     if(top==-1){
//         printf("Underflow");
//     }else{
//         printf("After popping the element %d",arr[top]);
//         return arr[top--];
//     }
// }
// void display(){
//     printf("Stack elements: ");
//     for(int i=top;i>=0;i--){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int choice;
//     do{
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             printf("Insert element: ");
//             int value;
//             scanf("%d",&value);
//             push(value);
//             break;
//             case 2:
//             pop();
//             break;
//             case 3:
//             display();
//             break;
//             default:
//             printf("Invalid choice!");
//         }
//     }while(choice!=4);
// }













// #include<stdio.h>
// #define SIZE 10
// int arr[SIZE];
// int front=-1,rear=-1;
// void enqueue(int value){
//     if(rear==SIZE-1){
//         printf("overflow");
//     }else{
//         if(front==-1)
//         front=0;
//         rear++;
//         arr[rear]=value;
//     }
// }
// int dequeue(){
//     if(front==-1)
//     printf("Underflow");
//     else{
//         if(front==rear)
//         front=rear=-1;
//         printf("After dequeuing element %d",arr[front]);
//         return arr[front++];
//     }
// }
// void display(){
//     printf("The queue element is ");
//     for(int i=front;i<=rear;i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }
// int main(){
//     int choice;
//     do{
//         scanf("%d",&choice);
//         switch(choice){
//             case 1:
//             printf("Insert element: ");
//             int val;
//             scanf("%d",&val);
//             enqueue(val);
//             break;
//             case 2:
//             dequeue();
//             break;
//             case 3:
//             display();
//             break;
//             default:
//             printf("Invalid choice!");
//         }
//     }while(choice!=4);
// }








#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node *start=NULL,*end=NULL;
void enqueue(int value){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    if(start==NULL && end==NULL){
        start=end=newnode;
    }else{
        (end)->next=newnode;
        end=newnode;
    }
}
void dequeue(){
    struct node* temp;
    if(start==NULL){
        printf("\nQueue is empty");
    }else{
        temp=start;
        start=start->next;
        int var;
        var=temp->data;
        free(temp);
    }
}
void display(){
    printf("Front: %d and rear: %d\n",start->data,end->data);
}
int main(){
    struct node *start=NULL,*end=NULL;
    int n;
    int value;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&value);
        enqueue(value);
    }
    display();
    printf("After performing \n");
    dequeue();
    display();
}


