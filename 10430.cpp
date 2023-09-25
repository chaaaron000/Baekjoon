#include <iostream>

int main(int argc, char const *argv[])
{
    int a, b, c;

    std::cin >> a >> b >> c;
    std::cout << (a + b) % c << std::endl
              << ((a % c) + (b % c)) % c << std::endl
              << (a * b) % c << std::endl
              << ((a % c) * (b % c)) % c;

    return 0;
}
