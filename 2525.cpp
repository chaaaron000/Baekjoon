#include <iostream>

int main(int argc, char const *argv[])
{
    int h, m, time;

    std::cin >> h >> m;
    std::cin >> time;

    if (m + time >= 60)
    {
        if (h + ((m + time) / 60) >= 24)
            std::cout << h + ((m + time) / 60) - 24 << " " << (m + time) % 60;
        else
            std::cout << h + ((m + time) / 60) << " " << (m + time) % 60;
    }
    else
        std::cout << h << " " << m + time;

    return 0;
}
