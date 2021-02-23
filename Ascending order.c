#include<stdio.h>
int main()
{
	int arr1[5];
	int n,i,j,temp;
	printf("Input the size of array :");
	scanf("%d",&n);

	  printf("Input %d element in thr array :\n",n);
	  for (i=0;i<n;i++)
	  {
		printf("element - %d :",i);
		scanf("%d",&arr1[i]);
	  }
	  for (i=0;i<n;i++)
	  {
		for (j=i+1;j<n;j++)
		{
			if (arr1[j] <arr1[i])
			{
				temp=arr1[i];
				arr1[i]=arr1[j];
				arr1[j]=temp;
			}
		
		  printf("element - %d :",i);
		}scanf("%d",&arr1[i]);
	  }
	printf("\nElement of array in sorted ascending order:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d",arr1[i]);
	}
    printf("\n\n");
     return 0;
}
