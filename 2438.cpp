#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int t;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < i + 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
