#include<stdio.h>
int main()
{
 	int n,re,k;
 	int hex;

 	printf("Enter the size of first set\t");
	scanf("%d",&n);
	int ar[n][4],ar2[n];
	
	for(int i=0;i<n;i++)
	{
		printf("Enter the %d row elements\n",i+1);
		for(int j=0;j<4;j++)
			{
				scanf("%d",&ar[i][j]);
			}
	}
	for(int i=0;i<n;i++)
		ar2[i]=ar[i][0]*1000+ar[i][1]*100+ar[i][2]*10+ar[i][3];
	
	for(int i=0;i<n;i++)
		{
			k=1;
			hex=0;
			while(ar2[i]!=0)
			{
				re=ar2[i]%10;
				hex=hex+re*k;
				k=k*2;
				ar2[i]=ar2[i]/10;
				
			}
			printf("%lX\n",(long)hex);
			
		}
	return 0;
}
