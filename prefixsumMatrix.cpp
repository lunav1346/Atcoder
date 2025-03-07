#include <bits/stdc++.h>
using namespace std;

int main()
{
    int H, W, Q;
    cin >> H >> W;
    int matrix[H][W];
    int prefixSumMatrix[H + 1][W + 1];

    // 입력 받기
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            int X;
            cin >> X;
            matrix[i][j] = X;
        }
    }

    // prefixsummatrix 배열 초기화[0][0]
    for (int i = 0; i <= H; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            prefixSumMatrix[i][j] = 0;
        }
    }

    // 2차원 누적합 계산
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            prefixSumMatrix[i][j] = matrix[i - 1][j - 1] +
                                    prefixSumMatrix[i - 1][j] +
                                    prefixSumMatrix[i][j - 1] -
                                    prefixSumMatrix[i - 1][j - 1];
        }
    }

    // 누적합배열 출력
    for (int i = 0; i <= H; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            cout << prefixSumMatrix[i][j] << " ";
        }
        cout << "\n";
    }

    cin >> Q;

    // Z[A][B]부터 Z[C][D]까지의 총합 질의.
    for (int i = 0; i < Q; i++)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        cout << prefixSumMatrix[C][D] +
                    prefixSumMatrix[A - 1][B - 1] -
                    prefixSumMatrix[C][B - 1] -
                    prefixSumMatrix[A - 1][D]
             << "\n";
    }
    return 0;
}