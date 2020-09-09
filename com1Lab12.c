#include<stdio.h>
int add(int mid,int final)
{
	return (mid+final);
} //function add
char grade(int add)
{
	char grade;
	if(add>=80 && add<=100)
	{
		grade = 'A';
	}
	else if(add>=70 && add<=79)
	{
		grade = 'B';
	}
	else if(add>=60 && add<=69)
	{
		grade = 'C';
	}
	else if(add>=50 && add<=59)
	{
		grade = 'D';
	}
	else if(add<50)
	{
		grade = 'F';
	}
	return(grade); 
} //function grade
int main() //start main
{
	int amount,mid,final,i,sum;
	char name1[15],name2[15],sub[10],gpa;
	
	printf("Enter your subject : ");
	scanf("%s",&sub);
	printf("Enter student amount : ");
	scanf("%d",&amount);
	printf("*--------------------------------*\n");
	printf("*--------------------------------*\n");
	
		for(i=0;i<amount;i++)
		{
			printf("Enter Full name : ");
			scanf("%s %s",&name1,&name2);
			printf("Enter midterm score : ");
			scanf("%d",&mid);
			printf("Enter finalterm score : ");
			scanf("%d",&final);
			sum = add(mid,final);
			gpa = grade(sum);
				if(gpa == 'A')
				{
					printf("Name = %s %s , Grade = %c, Excellent!!!\n",name1,name2,gpa);
					printf("*------------------------------------------*\n");
					printf("*------------------------------------------*\n");
				}
				else if(gpa == 'B')
				{
					printf("Name = %s %s , Grade = %c, Very Good :D \n",name1,name2,gpa);
					printf("*--------------------------------------------*\n");
					printf("*--------------------------------------------*\n");
				}
				else if(gpa == 'C')
				{
					printf("Name = %s %s , Grade = %c, Normal\n",name1,name2,gpa);
					printf("*--------------------------------------------*\n");
					printf("*--------------------------------------------*\n");
				}
				else if(gpa == 'D')
				{
					printf("Name = %s %s , Grade = %c, Fair\n",name1,name2,gpa);
					printf("*--------------------------------------------*\n");
					printf("*--------------------------------------------*\n");
				}
				else if(gpa == 'F')
				{
					printf("Name = %s %s , Grade = %c, Not worry...try again!\n",name1,name2,gpa);
				}
		}
	printf("*------------------------------------------*\n");
	printf("*-----------Program terminated-------------*\n");
return 0;		
} //end main

