#include<stdio.h>
#include<conio.h>
void main()
{  clrscr();
   double a,b,result=0;
   int choice;
   printf("Enter two numbers: ");
   scanf("%lf%lf", &a,&b);
   printf("Enter your choice(1-4): ");
   printf("\n1 for Addition.\n2 for Subtraction.\n3 for Multiplication.");
   printf("\n4 for Division.\n");
   scanf("%d",&choice);
   
 if(choice==1)
 {	result = a+b;
	printf("\nThe sum of %lf and %lf is: %lf",a,b,result);
 }
 
 else if(choice==2)
   {	result = a-b;
	printf("\nThe difference of %lf and %lf is: %lf",a,b,result);
   }
 
   else if(choice==3)
   {	result = a*b;
	printf("\nThe product of %lf and %lf is: %lf",a,b,result);
   }
 
  else if(choice==4)  
  {	result = a/b;
	printf("\nThe quotient of %lf and %lf is: %lf",a,b,result);
  }
 
    else
        printf("invalid choice");

 getch();
}
