#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand(time(0));
	int number=rand()%100+1;
	int count;
	int a;
	do{
		printf("请输入你想猜的数\n");
		scanf("%d",&a) ;
		count ++;
		if (a>number) {
			printf("大了\n");
		}
		else if (a<number){
			printf("小了\n");
		}  
	}while (a !=number);
	printf("你猜对了，共用%d次\n",count);
}
