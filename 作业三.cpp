#include<stdio.h>
void splitNum(int x, int num[]);
int count(int num[]);
int main ()
{
	int num[100000];
	int sum=1;
	for(int i=2;;i++)
	{
		splitNum(i,num);
		sum+=count(num);
		if(sum==i)
			break;
	}
	printf("%d",sum);
}
void splitNum(int x,int num[])
{
	num[0]=0;
	while(x)
	{
		num[++num[0]]=x%10;
		x/=10;
	}
	return;
}
int count(int num[])
{
	int sum=0;
	for(int i=1;i<=num[0];i++)
		if(num[i]==1)
			sum++;
	return sum;
}
