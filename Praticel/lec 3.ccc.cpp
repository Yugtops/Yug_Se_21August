//Short hand operator
#include<stdio.h>
main()
{
	int num,num1,ans;
	printf("Enter youe value here :");
	scanf("%d%d",&num,&num1);
	ans=num+num1;
	num+=num1;
	printf("this is your values after sum %d", num);
}
