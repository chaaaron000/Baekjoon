#include <iostream>
#include <stdio.h>
#include <vector>

int main(int argc, char const *argv[])
{
    int a, b;
    std::vector<int> sum;

    while (std::cin >> a >> b)
        sum.push_back(a + b);

    for (int i = 0; i < sum.size(); i++)
        printf("%d\n", sum[i]);

    return 0;
}
