#include<stdio.h>
struct employee
{
	char Name[30];
	float Salary;
	int EmplyId;
	char Exprience[100];
};
void main()
{
	int n;
	struct employee emp[5];
	for(n=0;n<5;n++)
	{
		printf("Enter Employee Name :");
		scanf("%s",&emp[n].Name);
		printf("Enter the Salary :");
		scanf("%f",&emp[n].Salary);
		printf("Enter the EmployeeId :");
		scanf("%d",&emp[n].EmplyId);
		printf("Enter the Exprience :");
		scanf("%s",&emp[n].Exprience);
	}
	for(n=0;n<5;n++)
	{
		printf(" \nEmployee Name :");
		printf("\nSalary :%f",emp[n].Salary);
		printf("\n EmployeeId :%d",emp[n].EmplyId);
		printf("\n Exprience :");
	}
	
}
