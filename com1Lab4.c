#include<stdio.h>
int main()
{
   int coin,coupon,hero,heroprice,skin,skinprice,blancecoin,blancecoupon,buy;
   char name[10];
   printf("*********************************************************************\n");
   printf("*                     Welcome to Garenona Online                    *\n");
   printf("*********************************************************************\n");
   printf("\tHero No.1 :\n");
   printf("\tViolet (Carry,Life:15%,Power Attack:90%)\n");
   printf("\tHero price : Coin = 13888\n");
   printf("\tSkin's price : skin1 = 490,Skin2 = 179(Only Coupon)\n");
   printf("\t--------------------------------------------\n");
   printf("\tHero No.2 :\n");
   printf("\tAiri (Fighter/Assassin,Life:25%,Power Attack:100%)\n");
   printf("\tHero price : Coin = 28888\n");
   printf("\tSkin's price : Skin = 510,skin2 = 375(Only Coupon)\n");
   printf("\t--------------------------------------------\n");
   printf("\tHero No.3 :\n");
   printf("\tFennik (Carry,Life:15%,Power Attack:90%)\n");
   printf("\tHero price : Coin = 18888\n");
   printf("\tSkin's price : Skin =450,skin2 = 510(Only Coupon)\n");
   printf("*********************************************************************\n");
   printf("*                        Please Enter your detail!                  *\n");
   printf("*********************************************************************\n");
   printf("Enter username: ");
   scanf("%s",&name);
   printf("Enter coin blance: ");
   scanf("%d",&coin);
   printf("Enter coupon blance: ");
   scanf("%d",&coupon);
   printf("Enter hero no.(1,2,3): ");
   scanf("%d",&hero);
   printf("Do you want to buy skin(Y/N): \n");
   scanf("%c",&buy);
    if(buy == 'Y'|| buy == 'y')
      {
      	    printf("Enter skin no.(1,2): ");
      	    scanf("%d",&skin);
      }
    if(hero == 1)
       {
       	    heroprice = 13888;       	    
 	   }
 	if(skin == 1)
 	   {
 	  	    skin = 490; 
	   } 
	else if(skin == 2)
	   {
	   	    skin = 179;
	   }
	else
	   {
	        skin = 0;      	
	   }   
	blancecoin = coin-heroprice;
	blancecoupon = coupon-skin;
	printf("Total coin =  %d,coupon = %d\n",heroprice,skinprice);
	printf("This transaction is completed.You got Violet for fighting.\n");
	printf("***********************************************************\n");
	printf("Thank you %s",name);
	printf("You blance = %d,coupon = %d",blancecoin,blancecoupon);  
   return 0;
}   
