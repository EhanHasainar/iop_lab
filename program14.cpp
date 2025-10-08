#include <stdio.h>
#include <ctype.h>

int main()
{
    char ch;
    printf("Enter a char: ");
    scanf(" %c", &ch);

    if (isupper(ch))
        printf("capital letter\n");
    else if (islower(ch))
        printf("small letter\n");
    else if (isdigit(ch))
        printf("digit\n");
    else
        printf("special symbol\n");

    return 0;
}