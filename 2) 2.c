#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,discriminant,root1,root2;
	printf("enter a number a,b,c:");
	scanf("%lf %lf %lf", &a,&b,&c);
	discriminant=b*b-(4*a*c);
	if(discriminant<0)
	{
		printf("roots are complex");
	}
	else
	{
		root1=(-b+sqrt(discriminant))/2*a;
		root2=(-b-sqrt(discriminant))/2*a;
	
	printf("root1: %lf", root1);
	printf("root2: %lf\n", root2);
}
	return 0;
	}
