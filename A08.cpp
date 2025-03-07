#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, Q;
    cin >> H >> W;
    int matrix[H][W];
    int prefixSumMatrix[H + 1][W + 1];

    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            int X;
            cin >> X;
            matrix[i][j] = X;
        }
    }

    // prefixsummatrix 배열 초기화.
    for (int i = 0; i <= H; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            prefixSumMatrix[i][j] = 0;
        }
    }

    // 가로로 더하기;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            prefixSumMatrix[i][j] = matrix[i - 1][j - 1] + prefixSumMatrix[i][j - 1];
        }
    }
    // 가로로 더한걸 세로로 더하기;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            prefixSumMatrix[i][j] += prefixSumMatrix[i - 1][j];
        }
    }

    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        cout << prefixSumMatrix[C][D] + prefixSumMatrix[A - 1][B - 1] - prefixSumMatrix[C][B - 1] - prefixSumMatrix[A - 1][D] << "\n";
    }
    return 0;
}