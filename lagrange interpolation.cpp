#include<stdio.h>
int main()
{
	int n;
	float s=0,x[]={0,1.2,2.4,3.7},f[]={3.41,2.68,1.37,-1.18};
	for(int j=0;j<=3;j++)
	{
		float p=1;
		for(int i=0;i<=3;i++)
		{
			if(i!=j)
				p*=((1.30-x[i])/(x[j]-x[i]));
		}
		s+=p*f[j];
	}
	printf("f(1.30)=%f",s);
	return 0;
}
