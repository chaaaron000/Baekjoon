#include <iostream>

int main(int argc, char const *argv[])
{
    int h, m;

    std::cin >> h >> m;

    if (m - 45 < 0)
    {
        if (h - 1 < 0)
            std::cout << 23 << " " << 60 + (m - 45);
        else
            std::cout << h - 1 << " " << 60 + (m - 45);
    }
    else
        std::cout << h << " " << m - 45;

    return 0;
}
