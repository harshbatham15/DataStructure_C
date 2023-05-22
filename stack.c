#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack *next;
};
typedef struct stack node;

void print(node *top)
{
    node *curr=top->next;
    printf("\n\n");
    while (curr->next!=NULL)
    {
        printf("%d-->",curr->data);
        curr=curr->next;
    }
    printf("%d",curr->data);

    return;
}

int isfull(node *top,int n)
{
    int count=-1;
    node *ptr=top;
    while (ptr->next!=NULL){
    ptr=ptr->next;
    count+=1;
    }
    
    if (count==n-1)
    return 1;

    return 0;
}


int isEmpty(node *top)
{
    if (top->next==NULL)
       return 1;

    return 0;
}


 void push(int n_data,int n,node *top)
{
    if (isfull(top,n)){
      printf("\nStack is Full!");
      return;
    }

    node *new_node=(node*)malloc(sizeof(node));
    new_node->data=n_data;

    if(top->next==NULL)
    {
       top->next=new_node;
       new_node->next=NULL;
       return;
    }

    node *temp;
    temp=top->next;
    top->next=new_node;
    new_node->next=temp;

    return;
}


void pop(node *top)
{
    if (isEmpty(top))
    {
        printf("\nStack is Empty!");
        return;
    }
    
    if (top->next->next==NULL)
    {
        top->next=NULL;
        return;
    }

    node *p;
    p=top->next->next;
    top->next=p;

    return;
}


int main()
{
    node *top;
    top->next=NULL;
    int n,n_data;
    printf("Enter Size of Stack: ");
    scanf("%d",&n);

    for(int i=0;i<n;i+=1)
    {
        printf("\nEnter data: ");
        scanf("%d",&n_data);
        push(n_data,n,top);
    }

    print(top);
    int choice=1;
    
    while(choice)
    {
       printf("\n\nEnter 1 to pop() else zero: ");
       scanf("%d",&choice);

       if (choice==1){
       pop(top);
       print(top);
       }
    }
    return 0;
}

