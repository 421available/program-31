#include<stdio.h>
void main()
{
	int marks[10],i,n,sum=0;
	double avg;
	printf("Enter the no. of elements:");
	scanf("%d,&n");
	for(i=0;i<=n;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&marks[i]);
		sum += marks[i];
	}
	avg=(double)sum/n;
	printf("Avg = %2lf",avg);
}
