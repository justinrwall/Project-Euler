#include <iostream>

int reverseInt(int n)
{
    int n_r{};
    while (n > 0)
    {
        int r = n % 10;
        n_r = n_r * 10 + r;
        n /= 10;
    }

    return n_r;
}

int main()
{
    int largestPalindrome{};

    for (int i = 999; i > 99; i--)
    {
        for (int j = 999; j > 99; j--)
        {
            int product{i * j};
            if (product == reverseInt(product) && product > largestPalindrome)
            {
                largestPalindrome = product;
            }
        }
    }

    std::cout << largestPalindrome << '\n';

    return 0;
}