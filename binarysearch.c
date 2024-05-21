#include<stdio.h>
int main()
{
	int arr[10],i,j,n,high,low,mid,p=0,s_data,temp;
	printf("Enter the size of array :");
	scanf("%d",&n);
	printf("Enter the element :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the search data :");
	scanf("%d",&s_data);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]<arr[j])
			{
		    	temp=arr[i];
			    arr[i]=arr[j];
		    	arr[j]=temp;
		    }
		}
	}
	low=0;
	high=n-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==s_data)
		{
			p=1;
			break;	
		}
		if(arr[mid]<s_data)
		{
			low=mid-1;
		}
		else
		{
			high=mid+1;
		}
		if(p==1)
		{
			printf("%d is present in %d \n",s_data,mid);
		}
		else
		{
			printf("\n %d is not present in %d",s_data,mid);
		}
    }
    return 0;
}
