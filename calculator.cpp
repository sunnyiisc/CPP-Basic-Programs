#include<stdio.h>
int main()
{
	int a,b;
	char x;
	do
	{
		printf("\nenter two numbers:");
		scanf("%d %d",&a,&b);
		printf("enter operation:");
		scanf("%c",&x);
		switch(x)
		{
			case '+':printf("sum=%d",a+b);break;
			case '-':printf("difference=%d",a-b);break;
			case '*':printf("product=%d",a*b);break;
			case '/':printf("quotient=%d",a/b);break;
			default:printf("invalid");
		}
    }while(x!='s');
	return 0;
}
