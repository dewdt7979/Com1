#include<stdio.h>
int main()
{
	int i,amount,day,full,part;
	char depart[20],acc[15],name[10],name1[25],type;
	float salary,salary1,rate,totals;
	printf("Enter Department Name: ");
	scanf("%s",&depart);
	printf("Enter Total Employee's Amount: ");
	scanf("%d",&amount);
	totals = 0;
	full = 0;
	part = 0;
		
		for(i=0;i<amount;i++)
			{
				printf("\nEmployee name: ");
				scanf("%s%s",&name,name1);
				printf("Enter employee type(F/P): ");
				scanf(" %c",&type);
				
					if(type=='F'||type=='f')
					{
						full = full+1;
						printf("Enter Salary = ");
						scanf(" %f",&salary);
						printf("============ Report ============\n");
						printf("%s%s is a Full time employee.\n",name,name1);
						printf("Salary is %.2f\n",salary);
						totals = totals+salary;
					}
					else if(type=='P'||type=='p')
					{
						part = part+1;
						printf("Enter work day(s) = ");
						scanf("%d",&day);
						printf("Rate/day = ");
						scanf("%f",&rate);
						salary1 = day*rate;
						printf("============ Report ============\n");
						printf("%s%s is a part time employee.\n",name,name1);
						printf("Salary is %.2f\n",salary1);
						totals = totals+salary1;
					}
					else
					{
						printf("Bye Bye jub jub!!");
					}
			}
		        printf("\nReport for %s Department\n",depart);
				printf("==========================\n");
				printf("Employee of Full time = %d\n",full);
				printf("Employee of Part time = %d\n",part);
				printf("Total Salary: %.2f bath\n",totals);
	return 0;
}
