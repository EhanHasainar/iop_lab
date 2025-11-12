#include <stdio.h>

int main() {
	
    char alph[] = {'A','B','C','D','E','F','G','H','I','J',
                        'K','L','M','N','O','P','Q','R','S','T',
                        'U','V','W','X','Y','Z'};
    
    int i,j;
    
    for(i=0; i<5; i++)
    {
    	for(j=0; j<i; j++)
    	{
    		printf("%c", alph[j]);
		}
		printf("\n");
	}
	
	return 0;
}

