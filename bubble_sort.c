    #include<stdio.h>
	int main()
	{
		// bubble sort
	int arr[1000],n,i,temp,count=0,in=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	int p=n;
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element of array: ",i+1);
		scanf("%d",&arr[i]);
	}
	
		label: in++;
		
		//sorted array break statement
		if (count==0 && in!=1){
			goto result_statement;
		}
		
		count=0;
		for(i=0;i<n;i++)
	{
		
		/* n-time break statement
		
		if(n==1)
		{
			break;
		}
		*/
		
		if (i==n-1)
		{
			n--;
			goto label;
		}
		
		if (arr[i]>arr[i+1])
		{
			count++;
			temp=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
	
	result_statement: printf("\nResultant array: ");
	for(i=0;i<p;i++)
	{
		printf("%d ",arr[i]);
	}
	
	return 0;
}