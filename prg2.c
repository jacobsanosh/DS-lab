#include<stdio.h>
int main()
{
	int n,max=0,occ=0,index;
	printf("enter the array size\t");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements\n");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
					{
						int temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
				}
	float mean=0;
	for(int i=0;i<n;i++)
		mean+=a[i];
	mean/=n;
	printf("mean is equal to %f \n",mean);
	
	if(n%2==0)
	{
		printf("the median elements are %d ,%d\n",a[n/2-1],a[n/2]);
	}
	else
		printf("the median is  %d ",a[n/2+1]);
	
	for(int i=0;i<n;i++)
	{
		occ=0;
		for(int j=i+1;j<n;j++)
			{
				if(a[i]==a[j])
					occ++;
			}
			if(occ>max)
			{
				index=i;
				max=occ;	
			}
			
	}
	if(max==0)
		printf("the is no mode\n");
	else
		printf("\nthe mod is %d",a[index]);	
	
		
}
