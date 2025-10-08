#include <stdio.h>

int main()
{
	int english, math, physics, chemistry, biology, total, avg;
	printf("English Marks: ");
	scanf("%d", &english);
	printf("Math Marks: ");
	scanf("%d", &math);
	printf("Physics Marks: ");
	scanf("%d", &physics);
	printf("Chemistry Marks: ");
	scanf("%d", &chemistry);
	printf("Biology Marks: ");
	scanf("%d", &biology);
	total = english + math + physics + chemistry + biology;
	printf("Total Marks: %d\n", total);
	avg = total/5;
	printf("Average Marks: %d", avg);
	return 0;
}
