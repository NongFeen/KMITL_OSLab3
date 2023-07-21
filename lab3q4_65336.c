#include <stdio.h>
int main(){
	int i,sum,count =0;
	do {
		printf("please input number : ");
		scanf("%d",&i);
		if(i>0){
			sum +=i;
			count++;
		}
	} while (i > 0);
	printf("sum = %d avg = %f ",sum,(0.0+sum)/count);
	return 0;
}
