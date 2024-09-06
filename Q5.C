#include<stdio.h>
#include<conio.h>
// wap to count the number of digits in a number using a while loop .

int main()
{
	int n,i=1;
	printf("enter  n : ");
	scanf("%d",&n);
	
	while(n>10)
	{
		n=n/10;
		i++;
	}
	printf("the number you enter is %d digit num ",i);
}
