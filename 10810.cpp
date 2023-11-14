#include <iostream>

int main(int argc, char const *argv[])
{
    int n, m;
    std::cin >> n >> m;
    int basket[n] = {0,};
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        std::cin >> a >> b >> c;
        for (int j = a - 1; j < b; j++)
        {
            basket[j] = c;
        }
    }
    for (int i = 0; i < n; i++)
    {
        std::cout << basket[i] << " ";
    }
    
    return 0;
}
