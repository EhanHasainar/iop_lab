#include <stdio.h>

int main()
{
	int gross_salary, basic_salary, house_rent, bonuses, prerequisites;
	printf("Your basic salary: ");
	scanf("%d", &basic_salary);
	printf("Your house rent: ");
	scanf("%d", &house_rent);
	printf("Your Bonus: ");
	scanf("%d", &bonuses);
	printf("Your prerequisites: ");
	scanf("%d", &prerequisites);
	gross_salary = basic_salary + house_rent + bonuses + prerequisites;
	printf("Your gross salary amounts to INR: %d", gross_salary);
	return 0;
}
