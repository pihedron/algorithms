#include <stdio.h>
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int grid[N][N];

    for (int i = 0; i < pow(N, 2); i++)
    {
        int row = floor(i / N);
        int col = i % N;
        cin >> grid[row][col];
    }
}