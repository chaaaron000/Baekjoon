#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t, a, b;

    std::cin >> t;

    int sum[t];

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        sum[i] = a + b;
    }

    for (int i = 0; i < t; i++)
    {
        printf("%d", sum[i]);

        if (i < t - 1)
            printf("\n");
    }

    return 0;
}
