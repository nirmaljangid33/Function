#include <iostream>
using namespace std;
int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int binomial(int n, int r)
{
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n - r);

    return fact_n / (fact_r * fact_nmr);
}
int main()
{
    int n, r;
    cout << "enter frist number : ";
    cin >> n;

    cout << "enter scend number : ";
    cin >> r;

    cout << "binomial is = " << binomial(n, r);
    return 0;
}