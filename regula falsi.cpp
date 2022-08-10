#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(pow(x,3)-(15*x)+5);
}
float mod(float x)
{
	if(x<0)
	return(-x);
	else
	return(x);
}
int main()
{
	float x1,x2,x3;
	printf("enter two values");
	scanf("%f%f",&x1,&x2);
	do
	{
		x3=((x1*f(x2))-(x2*f(x1)))/(f(x2)-f(x1));;
		if((f(x3)*f(x1))<0)
		x2=x3;
		else
		x1=x3;
	}
	while(mod(f(x3))>pow(10,(-7)));
	printf("root=%f",x3);
	return 0;
}
