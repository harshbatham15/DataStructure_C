#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
typedef struct node node;

int insert_node(int i_data,int w_data,node *head)
{
    node *x=head->next;
    node *y=(node*)malloc(sizeof(node));
    node *z;

    y->data=i_data;
    // x is current pointer
   
    while(x->data!=w_data){
    if (x->next==NULL)
    {
        printf("\nNo Such Node Exists!");
        return 0;
    }
    x=x->next;
    }

    z=x->next;
    x->next=y;
    y->next=z;

    return 0;
}

int pop(int d_data,node *head)
{   
    node *q=head->next;
    node *r=head;
    //r is previous and p is current pointer
   
    while(q->data!=d_data){
    if (q->next==NULL)
    {
        printf("\nNo Such Node Exists!");
        return 0;
    }
    r=r->next;
    q=q->next;
    }

    //deletion at the end
    if (q->next==NULL)
    {
        r->next=NULL;
    }

    //deletion at begining or else
    else
    {
        r->next=q->next;
    }

    return 0;
}

int print(node *head)
{
    printf("\n");
    node *p=head->next;
    //head->next is pointing to the first node  
    while(p->next!=NULL)
    {
        printf("%d-->",p->data);
        p=p->next;
    }
    printf("%d",p->data);
     return 0;
}

int push(int n_data,node *head)
{
    node *ptr;
    node *new_node=(node*)malloc(sizeof(node));
    // it is mandatory to assign memory to thode nodes which gonna occupy space unlinke pointers
    ptr=head;
    
    new_node->data=n_data;
    new_node->next=NULL;

    while(ptr->next!=NULL)
    ptr=ptr->next;

    ptr->next=new_node;

    return 0;
}

int main()
{
    int n_data,n,d_data,w_data,i_data,choice;
    node *head;
    head->next=NULL;
    // head->next=NULL is useful syntax than head=NULL
    printf("Enter N: ");
    scanf("%d",&n);

    for  (int i=0;i<n;i++){
        printf("\nEnter Data: ");
        scanf("%d",&n_data);
        push(n_data,head);
    }
    
    
    print(head);
    printf("\n\nEnter node to delete: ");
    scanf("%d",&d_data);
    pop(d_data,head);
    
    print(head);

    printf("\n\nEnter an element to insert: ");
    scanf("%d",&i_data);
    printf("\nWhere to insert-\n1.At the begining\n2.At the end\n3.After a node\n\nEnter choice: ");
    scanf("%d",&choice);

    if (choice==1)
    {
         node *s=(node*)malloc(sizeof(node));
         node *t;
         s->data=i_data;
         t=head->next;
         head->next=s;
         s->next=t;
    }

    else if (choice==3)
    {
        printf("\nEnter node after which you want to insert the given element: ");
        scanf("%d",&w_data);
        insert_node(i_data,w_data,head);
    }

    else
    {
        push(i_data,head);
    }

    print(head);

    return 0;
}