#include <stdio.h>

int main()
{
    int sec, hr, min;

    printf("Total seconds: ");
    scanf("%d", &sec);

    hr = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    sec = sec % 60;

    printf("Hours: %d\n", hr);
    printf("Minutes: %d\n", min);
    printf("Seconds: %d\n", sec);

    return 0;
}