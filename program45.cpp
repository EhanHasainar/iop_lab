#include<stdio.h>
#include<time.h>

int main()
{
	int lucky, i, guess, t, won=0;
	
	t = time(NULL);
	lucky = (t%10)+1;
	
	printf("Guess a number from 1 to 10\n");
	
	for(i=1; i<=3; i++)
	{
		printf("Guess %d = ", i);
		scanf("%d", &guess);
		
		if (guess==lucky)
		{
			won = 1;
			break;
		}
		
		else if(guess<lucky)
		{
			printf("Guess to low.\n");
		}
		
		else
		{
			printf("Guess to high.\n");
		}
	}
	
	printf((won==1)?"You won the game":"You lost the game");
	printf("\nLucky number was %d", lucky);
	
	return 0;
}
