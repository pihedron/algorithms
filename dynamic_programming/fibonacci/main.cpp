#include <stdio.h>
#include <iostream>

using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    int x = fib(n - 1) + fib(n - 2);
    return x;
}

int main()
{
    int N;
    cin >> N;
    cout << fib(N);
}
