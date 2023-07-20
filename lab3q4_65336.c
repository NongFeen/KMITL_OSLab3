#include <stdio.h>
int main(){
	int i,sum =0;
	do {
        	printf("please input number : ");
                scanf("%d",&i);
                sum += i;
    	} while (i > 0);
	printf("sum = %d\n",sum);
	return 0;
}
