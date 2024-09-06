#include<stdio.h>
#include<conio.h>
// wap to find minimum from a given 3 using nasted if else .
int main()
{
	int num1,num2,num3;
printf("Enter a value of num1 : ");
scanf("%d",&num1);
printf("Enter a value of num2 : ");
scanf("%d",&num2);
printf("Enter a value of num3 : ");
scanf("%d",&num3);

if(num1<num2)
{
	
	if(num1<num3)
	{
		printf("num1 is minimum\n");	
	}
	else
	{
		printf("num3 is minimum\n");
	}
}
else
{
	if(num2<num3)
	{
		printf("num2 is minimum\n");
	}
		else
		{
			printf("num3 is minimum\n");
		}
	
			
}


}

