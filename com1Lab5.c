#include<stdio.h>
int main()
{
	int A,B,C,D,F,i,amount,mid,final;
	char subject[5],name[30],name1[30];
	printf("Enter your subject: ");
	scanf("%s",&subject);
	printf("Enter student amount: ");
	scanf("%d",&amount);
	printf("*--------------------------------------------*\n");
	printf("*--------------------------------------------*\n");	
	for(i=1;i<=amount;i++)
	   {
	      printf("Enter you full name: ");
	      scanf("%s %s",&name,&name1);
	      printf("Enter midterm score: ");
	      scanf("%d",&mid);
	      printf("Enter final score: ");
	      scanf("%d",&final);	
		    if(mid+final>=80&&mid+final<=100)
			   {
			      printf("Name : %s %s,grade = A,Execellent!!!\n",name,name1);
			   }	      
			else if(mid+final>=70&&mid+final<=79)
			   {
			   	   printf("Name : %s %s,grade = B,Very Good\n",name,name1);
			   }
			else if(mid+final>=60&&mid+final<=69)
			   {
			       printf("Name : %s %s,grade = C,Normal\n",name,name1);
			   }
			else if(mid+final>=50&&mid+final<=59)
			   {
			   	   printf("Name : %s %s,grade = D,Fair\n",name,name1);
			   }
			else if(mid+final<50)
			   {
			   	   printf("Name: %s %s,grade = F,Not worry...try agian!!!\n",name,name1);
			   }
	   }
	printf("*--------------------------------------------*\n");
	printf("*------------Program terminated--------------*\n");
	
	return 0;
}
