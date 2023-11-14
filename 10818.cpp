#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, max, min;

    std::cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
        std::cin >> num[i];
    
    max = min = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
            max = num[i];

        if (num[i] < min)
            min = num[i];
    }

    std::cout << min << " " << max;

    return 0;
}
