#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	printf("Enter till where: ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
}
