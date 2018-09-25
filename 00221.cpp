#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	double m,p=0;
	double a[]={0,100000,200000,400000,600000,1000000};
	double b[]={0.1,0.075,0.05,0.03,0.015,0.01};
	printf("利  润\n  ");
	scanf("%lf",&m);
	for(i=0;i<6;i++)
	{
		if(m>a[i]&&i<5)
		{
			p+=(a[i+1]-a[i])*b[i];
		}
		else
		{
			p+=(m-a[i])*b[i];
			break;
		}
	}
	printf("奖金为\n  %.2f\n",p);
	system("pause");
	return 0;
}
