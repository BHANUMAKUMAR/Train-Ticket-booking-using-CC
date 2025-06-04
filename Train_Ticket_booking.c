//c code
#include<stdio.h>
int main()
{ 
int DESTINATION;
 printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO IRCTC\n");
 printf("SELECT YOUR JOURNEY PLAN\n");
 printf("1.MUMBAI TO DELHI \n2.TADEPALLIGUDEM TO DELHI\nENTER THE DESTINATION TYPE :");
 scanf("%d",&DESTINATION);
 if(DESTINATION==1)
 {
 	printf("MUMBAI TO DELHI\n");
 	printf("JOURNEY TIME:24HRS 28MIN\n");
 	printf("TOTAL DISTANCE=1259 KM\n");
 	printf("NUMBER OF PASSENGERS:");
 	int a,b,conformation;
 	scanf("%d",&a);
 	b=515*a;
 	printf("COST OF TICKET=%d",b);
 	printf("\nBOOK THE TICKET\n");
 	printf("1.YES\n2.NO\n");
 	printf("CONFORMATION=");
 	scanf("%d",&conformation);
 	if(conformation==1)
 	{
 		printf("YOUR TICKETS HAS BOOKED\n");
 		printf("HAPPY JOURNEY\n");
 		printf("THANKS FOR USING IRCTC\n");
        }
        else
        {
                printf("THANKS FOR USING IRCTC");
        }
 }
 else if(DESTINATION==2)
 {
 	printf("TADEPALLIGUDEM TO DELHI\n");
 	printf("JOURNEY TIME:28HRS 5 MIN\n");
 	printf("TOTAL DISTANCE=1857 KM\n");
 	printf("NUMBER OF PASSENGERS:");
 	int a,b,conformation;
 	scanf("%d",&a);
 	b=767*a;
 	printf("COST OF TICKET=%d",b);
 	printf("\nBOOK THE TICKET");
 	printf("1.YES\n2.NO\n");
 	printf("CONFORMATION=");
 	scanf("%d",&conformation);
 	if(conformation==1)
 	{
 		printf("YOUR TICKETS HAS BOOKED\n");
 		printf("HAPPY JOURNEY\n");
 		printf("THANKS FOR USING IRCTC\n");
        }
        else
        {
 	printf("THANKS FOR USING IRCTC");
        }
 }
 return 0;
}
