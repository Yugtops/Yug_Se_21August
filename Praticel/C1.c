/*
1 We can only use alp cap or small
2 We can't use any keywords
3 we can't use numbers in front of any var name 
4 we can't use whitespace in var name we can use _;
*/
#include<stdio.h>
main(){ 
    int num = 10; //%d
    float num2 = 25.50; //%f
    char name[20] ="yug"; //%cs
	double num3 = 55555.555; //%lf 
    printf("Hello World\n");	
    printf("%d",num);
    printf("\n%.2f",num2);
    printf("\n%s",name);
    printf("\n%lf",num3);
}
