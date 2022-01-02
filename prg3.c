#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int size,count;
	printf("Enter the string\t");
	scanf("%[^\n]",str);
	printf("%s",str);
	size=strlen(str);
	//printf("%d",size);
	for(int i=0;i<size;i++)
	{
		if(str[i])
		{
			count=1;
			for(int j=i+1;j<size;j++)
				{
					if(str[i]==str[j])
					{
						count++;
						str[j]='\0';
					}
					
				}
				printf("\n%c %d",str[i],count);
		}
	}
	
	return 0;
}
