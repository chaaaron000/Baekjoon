#include <iostream>

int main(int argc, char const *argv[])
{
    int n;
    int sum = 0;

    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }

    std::cout << sum;

    return 0;
}
