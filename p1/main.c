#include <stdio.h>

int main()
{
    char x[10] = {};
    int count = 0, maxCount = 0;
    char ch = '\0';

    for (char *p = x; p < x + 10; p++)
        scanf("%c", p);

    for (char *p = x; p < x + 10; p++) {

        count = 0;
        for (char *q = x; q < x + 10; q++) {
            if (*p == *q) {
                count ++;

                if (maxCount < count) {
                    maxCount = count;
                    ch = *p;
                }
            }
        }
    }

    printf("%c %d", ch, maxCount);

    return 0;
}
