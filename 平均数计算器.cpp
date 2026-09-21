#include <stdio.h>
int main() 
{
	int sum=0;
	int count=0;
	int a;
	printf("输入\n");
	scanf("%d",&a);
	while (a!=-1){ 
		sum+=a;
		count ++;
		printf("输入\n");
		scanf("%d",&a);
	}	printf("平均数为%d\n，共%d个数，和为%d",sum/count,count,sum);
}
