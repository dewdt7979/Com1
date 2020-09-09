#include<stdio.h>
int main()
    {
        int i,n,s,s2;
          
			printf("________________________________________\n\n");
			printf("enter start number of multiplication : ");
        	scanf("%d",&s);
        	printf("\nenter end number of multiplication : ");
        	scanf("%d",&s2);
        	printf("________________________________________");
			printf("\n\n");
        	
        	for(i=s;i<=s2;i++)
        	{
				
				for(n=1;n<=12;n++)
        		{
        			printf("%4d ",i*n);
        			s++;
				}
				printf("\n");
			}
			printf("\n\n");
			printf("               -> Create by Denpong CsBU <-                ");
     return 0;
    }

