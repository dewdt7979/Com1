#include<stdio.h>
int menu()
{
	int menu;
	printf("\n=============================================+\n");
	printf("+  List of menu                              +\n");
	printf("+  1.Calculator(get integers from keyboard)  +\n");
	printf("+  2.Calculator(get integers integer file)   +\n");
	printf("+  3.Exit program                            +\n");
	printf("==============================================\n");
	printf("Please select menu :");
	scanf("%d",&menu);
	return (menu);
}
void keyboard()
{
	int num1,num2;
	char ch;
	float answer;
	printf("Enter number 1 :");
	scanf("%d",&num1);
	printf("Enter number 2 :");
	scanf("%d",&num2);
	printf("Enter an operator (+,-,*,/,%% ):");
	scanf(" %c",&ch);
	if(ch=='+')
	{
		answer=(float)num1+num2;
	}
	else	if(ch=='-')
	{
		answer=(float)num1-num2;
	}
		if(ch=='*')
	{
		answer=(float)num1*num2;
	}
	else	if(ch=='/')
	{
		answer=(float)num1/num2;
	}
	else	if(ch=='%')
	{
		answer=num1%num2;
	}
	printf("The answer is %0.2f",answer);
}
void file()
{
	FILE *list;
	int num1,num2,i=0;
	char ch;
	float answer;
	list = fopen("list.txt","r");
	printf("List of all transactions\n");
	printf("========================\n");
	fscanf(list,"%d %c %d",&num1,&ch,&num2);
	while(!feof(list))
	{
	printf("Transaction #%d :Num1 = %d , Num2 = %d \n",i,num1,num2);
	if(ch=='+')
	{
		answer=(float)num1+num2;
		i++;
	}
	else	if(ch=='-')
	{
		answer=(float)num1-num2;
		i++;
	}
		if(ch=='*')
	{
		answer=(float)num1*num2;
		i++;
	}
	else	if(ch=='/')
	{
		answer=(float)num1/num2;
		i++;
	}
	else	if(ch=='%')
	{
		answer=num1%num2;
		i++;
	}
		printf("The answer is %0.2f \n",answer);
		fscanf(list,"%d %c %d",&num1,&ch,&num2);
	}
	printf("Total of transactions = %d",i);
}
int main()
{
	int list;
	list=menu();
	while(list!=3)
	{
	if(list==1)
	{
		keyboard();
	}
	else if(list==2)
	{
		file();
	}
	else if(list==3) 
	{
		printf("This program terminated\n");
	}
	list=menu();
	}
	return 0;
}

