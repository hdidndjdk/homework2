#include<stdio.h>
#include<math.h>
int isPrime(int x);
int splitNum(int x, int num[]);
int main()
{
    int sum=0;
    float arr=0;
	for(int i=100;i<10001;i++)
	{
		if(isPrime(i)==1)
		{
			int num[10]={0};
			int temp=splitNum(i,num);
			int zong=0,fang=0;
			for(int j=1;j<=num[0];j++)
			{
				zong+=num[j];
				fang+=num[j]*num[j];
			}
			if(isPrime(zong)==1)
			{
				if(isPrime(fang)==1)
				{
					printf("%d ",i);
					sum++;
					arr+=i;
				}
			}
		}
	}
	printf("\n%f",arr/sum);
	return 0;
}
int isPrime(int x)
{
	int y=sqrt(x);
	if(x<2)
		return 0;
	for(int i=2;i<=y;i++)
		if(x%i==0)
			return 0;
	return 1;
}
int splitNum(int x,int num[])
{
	num[0]=0;
	while(x)
	{
		num[++num[0]]=x%10;
		x/=10;
	}
	return 0;
}
