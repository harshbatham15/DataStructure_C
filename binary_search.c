#include<stdio.h>
int binary_search(int arr[],int n,int key)
{
	int mid_position,i,position;
	mid_position=n/2;
	if (arr[mid_position]>key)
	{
		for(i=0;i<=mid_position;i++)
		{
			if(arr[i]==key)
			{
				position=i;
			}
		}
	}
	if (arr[mid_position]<key)
	{
		for(i=mid_position;i<n;i++)
		{
			if(arr[i]==key)
			{
				position=i;
			}
		}
	}
	if (arr[mid_position]==key)
	{
				position=mid_position;
	}
	return position;
}

int main()
{
	int i,result,m;
	int arr[1000];
	int n;
	int key;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d sorted element: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter key: ");
	scanf("%d",&key);
	
	result=binary_search(arr,n,key);
	printf("\nKey is located at %d position",result+1);
	return 0;
}