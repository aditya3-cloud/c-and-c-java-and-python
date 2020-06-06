#include<stdio.h>
int main()
{
	float s1,s2,s3,s4,s5,per;
	printf("Enter the marks of 5 subbject :\n");
	scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
	per = (s1+s2+s3+s4+s5)/5.0;
	if(per>80)
	{
		printf("Grade A\n");
	}
	else
	{
		if(per<80 && per>=70)
		{
			printf("Grade B\n");
		}
		else
		{
			if(per<70 && per>=60)
			{
				printf("Grade C\n");
			}
			else
			{
				if(per<60 && per>=45)
				{
					printf("Grade D\n");
				}
				else
				{
					if(per<45)
					printf("FAIL\n");
				}
			}
		}
	}
	return 0;
}
