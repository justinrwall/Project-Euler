#include <iostream>
#include <map>

std::map<int, int> m{{1, 1}, {2, 1}};

int fibonacci(int n)
{
    if (m.find(n) != m.end())
        return m[n];

    m[n] = fibonacci(n - 1) + fibonacci(n - 2);

    return m[n];
}

int main()
{
    int sum{};

    int f{};
    for (int i = 1; f < 4'000'000; i++)
    {
        f = fibonacci(i);
        if (f % 2 == 0)
            sum += f;
    }

    std::cout << sum << '\n';

    return 0;
}