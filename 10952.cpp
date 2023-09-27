#include <iostream>
#include <stdio.h>
#include <vector>

int main(int argc, char const *argv[])
{
    std::vector<int> sum;
    int a, b;

    while (1)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
            break;

        sum.push_back(a + b);
    }

    for (int i = 0; i < sum.size(); i++)
        printf("%d\n", sum[i]);

    return 0;
}
