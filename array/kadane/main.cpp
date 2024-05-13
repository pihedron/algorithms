#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;

    int sum = 0;
    int best = 0;

    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        sum = max(x, sum + x);
        best = max(best, sum);
    }

    cout << best;
}
