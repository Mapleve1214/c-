#include <stdio.h> 
int main ()
{
	int x;
	int cnt=0;
	for(x=2;cnt<50;x++){
		int i=2;
		int isprime=1;
		for(i=2;i<x;i++){
			if (x%i==0){
				isprime=0; 
				break;
			}
		}
		if (isprime==1){
			printf("%d ",x);
			cnt++;
		}
		 
	}
	return 0;
}
