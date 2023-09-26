#include <iostream>

int main(int argc, char const *argv[])
{
    int n;

    std::cin >> n;

    for (int i = 0; i < n / 4; i++)
    {
        std::cout << "long ";
        
        if (i == (n / 4) - 1)
            std::cout << "int";
    }

    return 0;
}
