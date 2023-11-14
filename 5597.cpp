#include <iostream>

int main(int argc, char const *argv[])
{
    int student[30] = {0,};
    int num;
    for (int i = 0; i < 28; i++)
    {
        std::cin >> num;
        student[num - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (student[i] == 0)
            std::cout << i + 1 << "\n";
    }
    
    return 0;
}
