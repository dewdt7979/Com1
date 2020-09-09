#include<stdio.h>
int main()
{
	int num,step=0;
	printf("Initial value is ");
	scanf("%d",&num);
	if(num > 0)
	{
		while(num !=1)
	 	{
	 		step = step +1;
	 	if(num%2==0)
			{
				num = num/2;	
			}
		else
			{
				num = num *3 +1;
			}
		printf("Next value %d\n",num);			
		}
		printf("Final value %d,number of step %d",num,step);
	}
	else
	{
		printf("Error....");
	}
	return 0;
}
