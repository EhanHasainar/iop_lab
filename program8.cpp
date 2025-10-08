#include <stdio.h>

int main()
{
    int sec = 31558150;
    int d, h, m, s;

    d = sec / 86400;
    sec = sec % 86400;
    h = sec / 3600;
    sec = sec % 3600;
    m = sec / 60;

    printf("Days: %d\n", d);
    printf("Hours: %d\n", h);
    printf("Minutes: %d\n", m);

    return 0;
}