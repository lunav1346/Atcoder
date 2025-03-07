#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> A = {1, 4, 2, 3, 5};
    vector<int> P;

    P.push_back(A[0]); // A의 1번 요소를 P.begin()에 push.

    for (int i = 1; i < A.size(); i++)
    {
        P.push_back(A[i] + P[i - 1]);
    }

    for (auto j : P)
    {
        cout << j << " ";
    }
    return 0;
}