
#include<stdio.h>
int linear_search(int *arr,int key,int n)
{
	int i,index;
		for(i=0;i<n;i++)
	    {	
		if (arr[i]==key)
		{
			index=i+1;
			break;
		}
		}
	return index;
}
int selection_sort(int *arr,int n)
{
	//selection sort
    int i,j,to_this,to_checked,temp,choice;	
	printf("\nEnter Sorting type ascending(1) or descending(2)\n");
	label6: printf("\nEnter Type: ");
	        scanf("%d",&choice);
	
	if (choice==1)
  {	
	for(i=0;i<n;i++)
	{
		to_checked=arr[i];
		for(j=0;j<n;j++)
		{
			to_this=arr[j];
			if(to_this>to_checked)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return *arr;
}
     
     else if(choice==2){
	for(i=0;i<n;i++)
	{
		to_checked=arr[i];
		for(j=0;j<n;j++)
		{
			to_this=arr[j];
			if(to_this<to_checked)
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	return *arr;
}

   else{
   	printf("Invalid Option");
   	goto label6;
   }   
   
}


int quick_sort(int *arr,int n)
{
	//quick sort
	
	 int i,p=2,to_check,right_element_swap,temp,count=0,temp2,index_to_swap,pivot;
	
	  //pivot element declaration
   
      pivot=arr[n-1];
      
    // checking bigger element than pivot from left to right
    
for (i=0;i<=n-2;i++)
{
	// condition to terminate program
	
label3:    if(i>n-p)
          {
             break;
          }
          
        // main logic
        
       to_check=arr[i];
       right_element_swap=arr[n-p];
        if (pivot<to_check)
         {
            if (right_element_swap<pivot)
               { 
                   temp=arr[i];
                   arr[i]=arr[n-p];
                   arr[n-p]=temp;
                   p++;
                   count++;
                }
            else
                {
                    p++;
                    count++;
                    goto label3;
                }
         }
     
}

        // swaping pivot element to left from all other greater element
        
         index_to_swap=((n-1)-count);
         temp2=arr[n-1];
         arr[n-1]=arr[index_to_swap];
         arr[index_to_swap]=temp2;         
         
    return *arr;
}

int binary_search(int *arr,int key,int start,int end)
{
	// binary search through recursion
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
	
	int arr[1000],n,i,key,index,start,end,option,sort_number,search_type;
	label: printf("\nEnter number of elements: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d element of array: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	printf("\nTo Quick Sort Array Press 1\nTo Selection Sort Array Press 2\nFor No Sorting Enter 3\n");
	label4: printf("\nEnter option: ");
	        scanf("%d",&sort_number);
	
	if (sort_number==1)
	quick_sort(arr,n);
	
	else if(sort_number==2)
	selection_sort(arr,n);

	else if(sort_number==3)
	  goto label5;
	
	else
	{
		printf("Invalid Choice!");
		goto label4;
	}
	
	printf("\nsorted array is: ");	
	for(i=0;i<n;i++)
	printf("%d ",arr[i]);
	
	label5: printf("\n\nEnter key: ");
	scanf("%d",&key);
	
	label9: printf("\nPress 1 for linear serach Or 2 for Binary Search: ");
	scanf("%d",&search_type);
	
	if (search_type==2){
	start=0;
	end=n-1;
	index= binary_search(arr,key,start,end);
        }

	
	if (search_type==1)
	index= linear_search(arr,key,n);
	
	
	    if (search_type>2 || search_type<1)
    {
    	printf("Invalid Option!");
    	goto label9;
	}
	
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