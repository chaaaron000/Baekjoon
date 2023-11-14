#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t, a, b;

    scanf("%d", &t);

    int sum[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        sum[i] = a + b;
    }

    for (int i = 0; i < t; i++)
        printf("Case #%d: %d\n", i + 1, sum[i]);

    return 0;
}
