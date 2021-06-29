#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout << fixed << setprecision(1);

    long long fib[61], T, n, i;
    fib[0] = 0, fib[1] = 1;
    for (i = 2; i <= 60; i++)
    {
        fib[i] = fib[i - 2] + fib[i - 1];
    }
    cin >> T;
    while (T--)
    {
        cin >> n;
        cout << "Fib(" << n << ") = " << fib[n] << endl;
    }

    return 0;
}
