#include <bits/stdc++.h>
using namespace std;

int main()
{
    int R, B, W, N, K;
    unsigned long long result = 0;
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            int tmp = 0;
            tmp += i;
            tmp += j;
            if ((K - tmp <= N) && (K - tmp) >= 1)
            {
                result++;
            }
            else
                continue;
        }
    }
    cout << result << endl;
    return 0;
}