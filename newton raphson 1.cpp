#include<stdio.h>
#include<math.h>
#define f(x) pow(x,3)-(15*x)+5;
#define g(x) (3*pow(x,2))-15;
int main()
{
	float a,b,c;
	printf("enter assumed root");
	scanf("%f",&a);
	while((b-c)/c<pow(10,(-5)))
	{
		b=a-(f(a)/g(a));
		c=a;
		a=b;
	}
	printf("root=%f",b);
	return 0;
}
