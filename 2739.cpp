#include <iostream>

int main(int argc, char const *argv[])
{
    int a;

    std::cin >> a;

    for (int i = 1; i < 10; i++)
    {
        std::cout << a << " * " << i << " = " << a * i;

        if (i < 9)
            std::cout << std::endl;
    }

    return 0;
}
