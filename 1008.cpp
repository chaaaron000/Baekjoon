#include <iostream>

int main(int argc, char const *argv[])
{
    double num1, num2;

    std::cin >> num1 >> num2;

    std::cout.precision(9); // 정수 포함 9자리로 고정
    std::cout << std::fixed; // 소수점 아래 9자리로 고정
    std::cout << num1 / num2;
    
    return 0;
}

// https://all-i-want.tistory.com/109