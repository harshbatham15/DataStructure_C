#include<stdio.h>
void print(int arr[],int *top)
{
    if (*top==-1)
    return;

    printf("\n\n");

    for (int i=(*top);i>0;i-=1)
    printf("%d-->",arr[i]);

    printf("%d",arr[0]);

    return;
}

int isfull(int *top){
    if ((*top)==5)
    return 1;

    return 0;
}

int isEmpty(int *top){
    if ((*top-1)==-1)
    return 1;

    return 0;
}

void push(int arr[],int n_data,int *top)
{
    if (isfull(top))
    {
        printf("\n\nStack is Full!");
        return;
    }

    (*top)++;
    arr[(*top)]=n_data;
}

void pop(int *top)
{
    if (isEmpty(top))
    {
        printf("\n\nStack is Empty!");
        (*top)--;
        return;
    }

    (*top)--;
    return;
}

int main()
{
    int arr[6],n,val=-1,n_data;
    int *top;
    printf("Enter number of elements to input: ");
    scanf("%d",&n);
    top=&val;

    for(int i=0;i<n;i+=1)
    {
        printf("Enter Data: ");
        scanf("%d",&n_data);
        push(arr,n_data,top);
    }

    print(arr,top);
    push(arr,2,top);
    print(arr,top);
    push(arr,1,top);
    print(arr,top);
    push(arr,0,top);
    
    pop(top);
    print(arr,top);

    pop(top);
    print(arr,top);

    pop(top);
    print(arr,top);

    pop(top);
    print(arr,top);

    pop(top);
    print(arr,top);

    pop(top);
    print(arr,top);

    return 0;
}