#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int Divide = 512;
    vector<int> bin;

    cin >> N;

    for (int i = 9; i >= 0; i--)
    {
        int wari = (1 << i);
        cout << ((N / wari) % 2);
    }

    cout << endl;
    return 0;
}