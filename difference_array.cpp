#include <bits/stdc++.h>
using namespace std;

int main()
{
    int D, N, L, R;
    cin >> D;
    cin >> N;
    vector<int> change(D + 1, 0);

    for (int i = 0; i < N; i++)
    {
        cin >> L >> R;
        change[L - 1]++;
        change[R]--;
    }

    vector<int> result;
    result.resize(D);
    result[0] = change[0];
    for (int i = 1; i < D; i++)
    {
        result[i] = result[i - 1] + change[i];
    }

    for (auto i : result)
    {
        cout << i << " ";
    }

    return 0;
}