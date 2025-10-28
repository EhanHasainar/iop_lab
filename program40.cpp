#include <stdio.h>

int main() {
    int num, sum = 0;

    while (num >= 0) {

        printf("Enter a number: ");
        scanf("%d", &num);
        if (num>=0)
        	{
        		sum = sum + num;
			}
    }

    printf("Sum = %d", sum);

    return 0;
}

