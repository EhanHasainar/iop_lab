#include<stdio.h>

int main(){
	
	int inter, n1=0, n2=1, n, i;
	
	printf("Loop execution times: ");
	scanf("%d", &n);
	
		printf("%d ", n1);
		printf("%d ", n2);
	
	for(i=1; i<=n; i++)
	{
		inter = n2;
		n2 = n1+n2;
		n1 = inter;
		printf("%d ", n2);
	}
	
	return 0;
}
