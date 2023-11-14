#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, v;
    int c = 0;

    std::cin >> n;

    int num[n];

    for (int i = 0; i < n; i++)
        std::cin >> num[i];

    std::cin >> v;

    for (int i = 0; i < n; i++)
    {
        if (num[i] == v)
            c++;
    }

    std::cout << c;

    return 0;
}
