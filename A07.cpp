#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D, N, L, R;
    cin >> D;
    cin >> N;
    vector<int> prefix_sum;
    prefix_sum.assign(D, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> L >> R;
        for (int j = L; j <= R; j++)
        {
            prefix_sum[j - 1]++;
        }
    }

    for (auto i : prefix_sum)
    {
        cout << i << " ";
    }
    return 0;
}