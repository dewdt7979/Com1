#include<stdio.h>
int main()
{
	char dept[50],name[50],code;
	int amt,i,day,f=0,p=0;
	float rateday,salary,total;
	printf("Enter department name : ");
	scanf("%s",&dept);
	printf("Enter totale employee's amount :");
	scanf("%d",&amt);
	i=0;
	while(i<amt)
	{
		printf("\nEmployee name = ");
		scanf("%s",&name);
		printf("Enter employee type (F/P) :");
		scanf(" %c",&code);
		//use if checking full time/parttime
		if(code=='F' || code=='f')
		{
			printf("Enter salary :");
			scanf("%f",&salary);
			printf("\n================ Report ================\n");
			printf("%s is a full time employee.\n",name);
			printf("Salary is %0.2f\n\n",salary);
			f++;
			total=total+salary;
		}//fulltime
		else if(code=='P'|| code=='p')
		{
			printf("Enter work day(s)=");
			scanf("%d",&day);
			printf("Rate/day = ");
			scanf("%f",&rateday);
			printf("\n================ Report ================\n");
			printf("%s is a part time employee.\n",name);
			salary=day*rateday;
			printf("salary is %0.2f \n\n",salary);
			p++;
			total=total+salary;
		}//parttime
		i++;
	}
		printf("\nReport for IT-Support Department\n");
		printf("=================================\n");
		printf("Employee of full time = %d \n",f);
		printf("Employee of part time = %d \n",p);
		printf("Total Salary : %0.2f \n",total);
	return 0;
}
