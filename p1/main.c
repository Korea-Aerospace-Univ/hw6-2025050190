#include <stdio.h>

int main()
{
    char x[10] = {};
    int count = 0, flag = 0;
    char ch;
    char *p, *q;

    for (p = x; p < x + 10; p++)
        scanf("%c", p);

    for (p = x; p < x + 10; p++) {

        flag = 0;
        for (q = x; q < x + 10; q++) {
            if (*p == *q) {
                flag ++;

                if (count < flag) {
                    count = flag;
                    ch = *p;
                }
            }
        }
    }

    printf("%c %d", ch, count);

    return 0;
}
