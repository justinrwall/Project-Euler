#include <iostream>

long long largestPrimeFactor(long long n)
{
    long long largestPrime{};

    while (n % 2 == 0)
    {
        largestPrime = 2;
        n /= 2;
    }

    for (long long i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            largestPrime = i;
            n /= i;
        }
    }

    if (n > 2)
    {
        largestPrime = n;
    }

    return largestPrime;
}

int main()
{
    std::cout << largestPrimeFactor(600'851'475'143) << '\n';

    return 0;
}