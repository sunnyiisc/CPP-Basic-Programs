#include<stdio.h>
int main()
{
	float x[]={0,1,2,3,4},y[]={1,2,3,4,5},d=1,p=1;
	int i,j,h=1;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
			y[j]=y[j+1]-y[j];
		p*=(1.5-x[i])/(h*(i+1));
		d+=p*y[];
	}
	printf("%f",d);
	return 0;
}
