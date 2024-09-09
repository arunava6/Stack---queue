// #include <stdio.h>
// #define SIZE 10

// int arr[SIZE];
// int front = -1;
// int rear = -1;

// void enqueue(int value) {
//     if (rear == SIZE - 1) {
//         printf("Queue Overflow\n");
//     } else {
//         if (front == -1) {
//             front = 0;
//         }
//         rear++;
//         arr[rear] = value;
//     }
// }

// int dequeue() {
//     if (front == -1) {
//         printf("Queue Underflow\n");
//     } else {
//         int dequeuedValue = arr[front];
//         if (front == rear) {
//             front = rear = -1;
//         } else {
//             front++;
//         }
//         return dequeuedValue;
//     }
// }

// void display() {
//     if (front == -1) {
//         printf("The queue is empty!\n");
//     } else {
//         printf("The queue is: ");
//         for (int i = front; i <= rear; i++) {
//             printf("%d ", arr[i]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int n;
//     printf("How many elements do you want to insert: ");
//     scanf("%d", &n);

//     int value;
//     for (int i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &value);
//         enqueue(value);
//     }
//     display();
//     int dequeuedValue = dequeue();
//     printf("%d\n",dequeuedValue);
//     dequeuedValue=dequeue();
//     printf("%d\n",dequeuedValue);
//     display();
//     return 0;
// }








//queue using linked list

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *front=NULL,*rear=NULL;
void enqueue(int val){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->next=NULL;
    if(front==NULL && rear==NULL)
    front=rear=newnode;
    else{
        rear->next=newnode;
        rear=newnode;
    }
}
void dequeue(){
    struct node *temp;
    if(front==NULL){
        printf("Queue is empty\n");
    }else{
        temp=front;
        front=front->next;
        if(front==NULL)
        rear=NULL;
        int var;
        var=temp->data;
        free(temp);
        printf("dequeue element: %d\n",var);
    }
}
void printlist(){
    struct node *temp=front;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(50);
    printf("queue: ");
    printlist();
    dequeue();
    dequeue();
    printf("After dequeueing: ");
    printlist();
}















// #include<stdio.h>
// #define MAX 10
// void addfront(int*,int,int*,int*);
// void addrear(int*,int,int*,int*);
// int delfront(int*,int*,int*);
// int delrear(int*,int*,int*);
// void display(int *);
// int count(int*);
// int main(){
//     int arr[MAX];
//     int front,rear,i,n;
//     front=rear=-1;
//     for(i=0;i<MAX;i++){
//         arr[i]=0;
//     }
//     addrear(arr,5,&front,&rear);
//     addfront(arr,12,&front,&rear);
//     addrear(arr,11,&front,&rear);
//     addfront(arr,5,&front,&rear);
//     addrear(arr,8,&front,&rear);
//     printf("\nElements in dequeue: ");
//     display(arr);
//     i=delfront(arr,&front,&rear);
//     printf("\removed item: %d",i);
//     printf("\nelements in dequeue after deletion: ");
//     display(arr);
//     addrear(arr,16,&front,&rear);
//     addrear(arr,7,&front,&rear);
//     printf("\nelements in a dequeue after addition: ");
//     display(arr);
//     i=delrear(arr,&front,&rear);
//     printf("\nremoved item %d",i);
//     printf("\nelements in a dequeue after deletion: ");
//     display(arr);
//     n=count(arr);
//     printf("\nTotal number of elements in dequeue: %d",n);
// }
// void addfront(int *arr,int item,int *pfront,int *prear){
//     int i,k,c;
//     if(*pfront==0 && *prear==MAX-1){
//         printf("\nDequeue is full.\n");
//         return;
//     }
//     if(*pfront==-1){
//         *pfront=*prear=0;
//         arr[*pfront]=item;
//         return ;
//     }
//     if(*prear!=MAX-1){
//         c=count(arr);
//         k=*prear+1;
//         for (i = 1; i<=c; ++i){
//             arr[k]=arr[k-1];
//             k--;
//         }
//         arr[k]=item;
//         *pfront=k;
//         (*prear)++;
//     }else{
//         (*pfront)--;
//         arr[*pfront]=item;
//     }
// }
// void addrear(int *arr,int item,int *pfront,int *prear){
//     int i,k;
//     if(*pfront==0 && *prear==MAX-1){
//         printf("\nDequeue is full.\n");
//         return;
//     }
//     if(*pfront==-1){
//         *prear=*pfront=0;
//         arr[*prear]=item;
//         return;
//     }
//     if(*prear==MAX-1){
//         k=*pfront-1;
//         for(i=*pfront-1;i<*prear;i++){
//             k=i;
//             if(k==MAX-1)
//             arr[k]=0;
//             else
//             arr[k]=arr[i+1];
//         }
//         (*prear)--;
//         (*pfront)--;
//     }
//     (*prear)++;
//     arr[*prear]=item;
// }




