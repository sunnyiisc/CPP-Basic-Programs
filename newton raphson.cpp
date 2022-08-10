#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(pow(x,3)-(15*x)+5);
}
float g(float x)
{
	return((3*pow(x,2))-15);
}
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
