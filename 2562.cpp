#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, count;
    int max = 0;

    for (int i = 0; i < 9; i++)
    {
        std::cin >> a;
        if (a > max)
        {
            max = a;
            count = i;
        }
    }
    
    std::cout << max << "\n" << count + 1;

    return 0;
}
