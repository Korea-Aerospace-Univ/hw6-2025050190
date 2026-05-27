#include <stdio.h>

int main()
{
    int x[20], y[20];
    int N;
    int *p, *q;

    scanf("%d", &N);

    for (p = x; p < x + N; p++)
        scanf("%d", p);
    for (p = y; p < y + N; p++)
        scanf("%d", p);


    for (p = x, q = y+N-1; p < x + N; p++, q--) {
        printf(" %d", *p + *q);
    }


    return 0;
}
