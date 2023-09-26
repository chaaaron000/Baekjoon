#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b;

    std::cin >> a >> b;

    if (a > b)
    {
        std::cout << ">";
    }
    else if (a < b)
    {
        std::cout << "<";
    }
    else if (a == b)
    {
        std::cout << "==";
    }

    return 0;
}
