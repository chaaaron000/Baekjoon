#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b, c, num;
    int count = 0;

    std::cin >> a >> b >> c;

    if (a == b)
    {
        count++;
        num = a;
    }
    if (b == c)
    {
        count++;
        num = b;
    }
    if (c == a)
    {
        count++;
        num = c;
    }

    if (count == 3)
        std::cout << 10000 + a * 1000;

    else if (count == 1)
        std::cout << 1000 + num * 100;

    else
    {
        num = a;

        if (num < b)
            num = b;

        if (num < c)
            num = c;

        std::cout << num * 100;
    }

    return 0;
}
