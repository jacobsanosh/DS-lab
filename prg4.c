#include<stdio.h>
int main()
{
	int n1,n2,k=0;
	printf("Enter the size of first set\t");
	scanf("%d",&n1);
	printf("Enter the second matrix size\t");
	scanf("%d",&n2);
	int ar2[n2],ar1[n1],ar3[n1];
	
	printf("Enter the first set elements\n");
	for(int i=0;i<n1;i++)
		scanf("%d",&ar1[i]);
	
	printf("Enter the second set elements\n");
	for(int i=0;i<n2;i++)
		scanf("%d",&ar2[i]);
	
	for(int i=0;i<n1;i++)
		{
			for(int j=0;j<n2;j++)
				{
					if(ar1[i]==ar2[j])
						{
							ar3[k]=ar1[i];
							k++;
						}
				}
		}
	printf("\ninterscections are\n");
	for(int i=0;i<k;i++)
		printf("%d\t",ar3[i]);
	return 0;
}
