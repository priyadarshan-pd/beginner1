#include <stdio.h>
int main(void) {
	int a,sum;
	sum=1;
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	sum=sum*i;
	printf("%d",sum);
	
	return 0;
}
