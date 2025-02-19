#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, X;
    bool Result = false;
    vector<int> A;
    cin >> N >> X;
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        A.push_back(num);
    }

    for (auto j : A)
    {
        if (j == X)
            Result = true;
    }

    if (Result == true)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}