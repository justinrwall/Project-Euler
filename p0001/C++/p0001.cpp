#include <iostream>

int main()
{
    int sum{};

    for (int i = 0; i < 1000; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    std::cout << sum << '\n';

    return 0;
}