
#include <stdio.h>
#include <math.h>
float mysqrt(float n) 
{
  float x,y;
   x=1;
  while(fabs(x*x-n)>0.000001)
   {
   y=(x+n/x)/2;
   x=y;
  }
  return x;
}
int main (){
    float a;
	a=mysqrt(2);
	printf("a=%f",a);
	return 0;
}

