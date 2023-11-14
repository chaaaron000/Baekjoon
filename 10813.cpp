#include <iostream>

int main(int argc, char const *argv[])
{
    int n, m;
    std::cin >> n >> m;
    int basket[n];
    for (int i = 0; i < n; i++)
        basket[i] = i + 1;
    int a, b, temp;
    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b;
        temp = basket[a - 1];
        basket[a - 1] = basket[b - 1];
        basket[b - 1] = temp;
    }
    for (int i = 0; i < n; i++)
        std::cout << basket[i] << " ";
    
    return 0;
}
