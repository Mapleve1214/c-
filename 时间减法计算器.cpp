#include <stdio.h>
int main() 
{
	int hour1,min1,hour2,min2;
	scanf("%d:%d",&hour1,&min1);
	scanf("%d:%d",&hour2,&min2);
	
	int M1,M2,a;
	M1=hour1*60+min1;
	M2=hour2*60+min2;
	a=M1-M2; 
	while (a<0)
	{
		a+=1440;
	}
	printf("时间是%d时%d分\n",a/60,a%60);
	return 0;
	
	 
}
