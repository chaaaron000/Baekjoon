#include <iostream>

int main(int argc, char const *argv[])
{
    int times;

    std::cin >> times;

    int a[times], b[times];

    for (int i = 0; i < times; i++)
    {
        std::cin >> a[i] >> b[i];
    }

    for (int i = 0; i < times; i++)
    {
        std::cout << a[i] + b[i];
        if (i < times - 1)
            std::cout << std::endl;
    }

    return 0;
}
