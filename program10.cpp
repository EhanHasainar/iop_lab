#include <stdio.h>

int main()
{
    int m, p, c, e, cm;

    printf("Maths marks: ");
    scanf("%d", &m);
    printf("Physics marks: ");
    scanf("%d", &p);
    printf("Chemistry marks: ");
    scanf("%d", &c);
    printf("Entrance marks: ");
    scanf("%d", &e);

    cm = (m / 2) + (p / 2) + (c / 2) + e;

    printf("Cut off mark: %d\n", cm);

    return 0;
}