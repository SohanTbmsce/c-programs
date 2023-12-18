#include <stdio.h>
int top=-1;
int main(){
int stack[5];
int operations(){
int choice;
int value;
printf("enter your choice(1-push,2-pop,3-display):");
scanf("%d",&choice);
switch(choice){
case 1:push(stack,value);
    operations();
    break;
case 2: pop(stack);
    operations();
    break;
case 3: display(stack);
    operations();
    break;
    return 0;
}
}
operations();
return 0;
}

int push(int arr[],int value){
if(top>4){
    printf("stack overflow\n");
}
else{
    printf("enter the value to be inserted:");
    scanf("%d",&value);
    ++top;
    arr[top]=value;
    printf("inserted element:%d\n",arr[top]);
}
return 0;
}

int pop(int arr[]){
    if(top==-1){
        printf("stack is empty\n");
    }
    else{
    printf("deleted item:%d\n",arr[top]);
    top--;
    }
    return 0;
}


int display(int arr[]){
for(int i=top;i>=0;i--){
    printf("the elements in the stack are:%d\n",arr[i]);
}
return 0;
}

