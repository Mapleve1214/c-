#include <stdio.h>
int main()
{
	int hour1; 
	int minute1;
	int hour2 ;
	int minute2;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int M1;
	int M2;
	M1=hour1*60+minute1;
	M2=hour2*60+minute2;
	int t; 
	t=M1+M2;
	printf("现在是%d点%d分",t/60,t%60);
	return 0;
 } 
