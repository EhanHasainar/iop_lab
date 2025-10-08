#include <stdio.h>

int main()
{
    int hr, min, sec, total;

    printf("Hours: ");
    scanf("%d", &hr);
    printf("Minutes: ");
    scanf("%d", &min);
    printf("Seconds: ");
    scanf("%d", &sec);

    total = (hr * 3600) + (min * 60) + sec;

    printf("Total seconds: %d\n", total);

    return 0;
}