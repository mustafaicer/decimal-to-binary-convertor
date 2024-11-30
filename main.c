#include<stdio.h>

int main()
{
	int binary[32];
	int num = 0, remainder = 0,  i = 0,  j = 0;
	printf("Enter your number : ");
	scanf("%d",&num);

	while(num > 0)
	{
		remainder = num%2;
		num = num/2;
		binary[i] = remainder;
		i++;
	}

	j = i-1;
	while(j >= 0)
	{
		printf("%d",binary[j]);
		j--;
	}
	return 0;
}
