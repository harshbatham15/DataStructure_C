#include<stdio.h>
int main()
{
	
	int arr[1000],n,i,key,index;
	int brr[1000],m=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\nEnter Key: ");
    scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element of array: ",i+1);
		scanf("%d",&arr[i]);
		
		if (arr[i]==key){
		  brr[m]=i+1;
		  m++;
	}
	
	}
	
	
	printf("\nKey present at: ");
	for(i=0;i<m;i++)
	{
		
			if (i==m-1)
		{
			printf("%d",brr[i]);
			break;
		}
		printf("%d, ",brr[i]);	
	
	}
}