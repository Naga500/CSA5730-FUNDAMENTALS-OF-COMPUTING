#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	int years, wait;
	printf("Enter how many years: ");
	scanf("%d",&years);
	for()
	if(isalpha(years) == 0)
	{
		printf("Character cant be used");
	}
	else
	{
		if(years<0)
		{
		printf("The negative value can\'t be taken.\n");
		}
		else if(years>0 && years <18)
		{
		wait = 17 - years;
		printf("You are not eligible. You have to wait for %d years.", wait);
		}
		else if(years>18)
		{
		printf("You are eligible");
		}
	}

	return 0;
}
