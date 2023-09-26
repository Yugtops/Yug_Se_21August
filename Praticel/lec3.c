/*
Syntex:
(Condition)?exp1:exp2;
we use printf for printing any statments in our consle
we use scanf for getting dynamic values or getting values from user 
*/
#include<stdio.h>
main()

{
	int num,num1;
	printf("Enter your num values here :");
	scanf("%d",&num);//& is used for providing address of your variable
	printf("Enter your num1 values here :");
	scanf("%d",&num1);
	(num>num1)?printf("num is gretter then num1 "):printf("num1 is gretter then num");
}


