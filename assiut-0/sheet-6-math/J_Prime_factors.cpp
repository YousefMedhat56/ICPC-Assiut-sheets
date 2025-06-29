#include "iostream"
#include <cmath>
#include <vector>
using namespace std;

bool is_prime(long long n)
{
    if (n == 2)
        return true;
    else
    {
        for (long long i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

vector<long long> generate_primes(long long limit)
{
    vector<long long> primes = {};
    for (long long i = 2; i <= sqrt(limit); i++)
    {
        if (is_prime(i))
            primes.push_back(i);
    }

    return primes;
}

int main()
{

    long long num;
    cin >> num;

    vector<long long> primes = generate_primes(num);

    // prime factors
    vector<long long> p_factors = {};

    // count of prime factors
    vector<long long> p_factors_count = {};

    while (num > 1)
    {
        bool primes_finished = false;

        for (long long i = 0; i < primes.size(); i++)
        {

            long long prime = primes[i];
            if (num % prime == 0)
            {

                num = num / prime;

                if (p_factors.size() > 0)
                {

                    long long last_elm_index = p_factors.size() - 1;
                    if (prime == p_factors[last_elm_index])
                    {
                        p_factors_count[last_elm_index]++;
                    }
                    else
                    {
                        p_factors.push_back(prime);
                        p_factors_count.push_back(1);
                    }
                }
                else
                {
                    p_factors.push_back(prime);
                    p_factors_count.push_back(1);
                }
                break;
            }

            if (i == primes.size() - 1)
                primes_finished = true;
        }

        // Edge case: check if the primes are finished
        if (primes_finished)
        {
            p_factors.push_back(num);
            p_factors_count.push_back(1);
            break;
        }
    }

    for (int i = 0; i < p_factors.size(); i++)
    {
        cout << '(' << p_factors[i] << '^' << p_factors_count[i] << ')';

        if (i < p_factors.size() - 1)
        {
            cout << '*';
        }
    }
    return 0;
}