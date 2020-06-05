#include<stdio.h>
void main()
{
	int num1,num2,opt;
	printf("enter the first number :");
	scanf("%d",&num1);
	printf("enter the second number :");
	scanf("%d",&num2);
	printf("Enter Your  option :");
	printf("1-Sum");
	printf("2-Subtraction");
	printf("3-Division");
	printf("4-Multiplication");
	scanf("%d",&opt);
	switch(opt)
	{
		case 1:
			printf("Sum of %d and %d is :%d",num1,num2,num1+num2);
			break;
		case 2:
			printf("Subtraction of %d and %d is :%d",num1,num2,num1-num2);
			break;
		case 3:
			printf("Multiplication of %d and %d is :%d",num1,num2,num1*num2);
			break;
		case 4:
		if(num2==0)
		{
			printf("OOps divide by zero");
		}
		else
		{
			printf("Division of %d and %d is :%d",num1,num2,num1/num2);
		}
		break;
		
		default:
			printf("enter the correct option :");
			break;
	}
}
	
