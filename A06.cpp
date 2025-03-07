#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, Q, A;
    vector<int> prefix_sum;

    cin >> N >> Q;
    prefix_sum.push_back(0);
    for (int i = 1; i <= N; i++)
    {
        cin >> A;
        prefix_sum.push_back(A + prefix_sum[i - 1]);
    }

    for (int j = 0; j < Q; j++)
    {
        int L, R;
        cin >> L >> R;
        cout << prefix_sum[R] - prefix_sum[L - 1] << "\n";
    }

    return 0;
}