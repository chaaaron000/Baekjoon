#include <iostream>

int main(int argc, char const *argv[])
{
    int score;

    std::cin >> score;

    if (score >= 90)
    {
        std::cout << "A";
    }
    else if (score >= 80 && score < 90)
    {
        std::cout << "B";
    }
    else if (score >= 70 && score < 80)
    {
        std::cout << "C";
    }
    else if (score >= 60 && score < 70)
    {
        std::cout << "D";
    }
    else
    {
        std::cout << "F";
    }

    return 0;
}
