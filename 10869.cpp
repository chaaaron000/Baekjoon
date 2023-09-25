#include <iostream>

int main(int argc, char const *argv[])
{
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << num1 + num2 << std::endl 
              << num1 - num2 << std::endl 
              << num1 * num2 << std::endl 
              << num1 / num2 << std::endl 
              << num1 % num2;

    return 0;
}
