#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 20
int arr[SIZE],top=-1;
void push(int value){
    if(top==SIZE-1){
        printf("Stack Overflow");
    }else{
        top=top+1;
        arr[top]=value;
    }
}
int pop(){
    if(top==-1){
        printf("\n Stack Underflow\n");
        return -1;
    }else{
        //printf("Pop from the stack %d\n",arr[top]);
        return arr[top--];
    }
}
int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
int isoperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}
char *infixtopostfix(char *infix){
    char *postfix=(char *)malloc((strlen(infix)+1)*sizeof(char));
    int i=0,j=0;
    while(infix[i]!='\0'){
        if(!isoperator(infix[i])){
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else{
            while(top=-1 && precedence(infix[i])<=precedence(arr[top])){
                postfix[j]=pop();
                j++;
            }
            push(infix[i]);
            i++;
        }
    }
    while(top>-1){
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main(){
    char *infix="a-b*d+c";
    printf("postfix is %s",infixtopostfix(infix));
}