#include<stdio.h>
int binary_search(int *arr,int key,int start,int end)
{
	// binary search through recursion (when array is sorted)
	int mid,p,q;
	while(start<=end)
	{
		p=start;
		q=end;
		mid=((p+q)/2);
		
		if (arr[mid]==key)
		return mid+1;
		
		if(arr[mid]<key)
		return binary_search(arr,key,mid+1,end);
		
		if(arr[mid]>key)
		return binary_search(arr,key,start,mid-1);
		
	}	
		
	return 0;
}


int main()
{
	
	int arr[1000],n,i,key,index,start,end,option;
	label: printf("\nEnter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element of sorted array: ",i+1);
		scanf("%d",&arr[i]);
	}
	start=0;
	end=n-1;
	printf("\nEnter key: ");
	scanf("%d",&key);
	index= binary_search(arr,key,start,end);
	
	if(index>3)
	printf("\nKey is present at %dth index",index);
	
	else if(index==1)
	printf("\nKey is present at %dst index",index);
	
	else if(index==2)
	printf("\nKey is present at %dnd index",index);
	
	else if(index==3)
	printf("\nKey is present at %drd index",index);
	
	else
	printf("\nNo Such Element present in the array");
	
	label2: printf("\n\nTo restart program enter 1 else 0: ");
	        scanf("%d",&option);
	
	if (option==1)
	  goto label;
	  
	else if(option!=0 && option!=1)
	{
		printf("\nInvalid Option!");
		goto label2;
	}
	
	else
	 printf("\nProgram Terminated!");
	
	return 0;
}