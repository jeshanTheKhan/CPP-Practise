#include <bits/stdc++.h>
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int T;
    std::cin >> T;

    while (T--)
    {
        int N;
        std::cin >> N;

        if (isPrime(N))
        {
            std::cout << "yes" << std::endl;
        }
        else
        {
            std::cout << "no" << std::endl;
        }
    }

    return 0;
}
