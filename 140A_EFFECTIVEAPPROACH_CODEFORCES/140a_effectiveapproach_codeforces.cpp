#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    int toBeEvaluatedArray[n + 1];

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        toBeEvaluatedArray[a] = i;
    }

    int m;
    cin >> m;

    long long totalForward = 0;
    long long totalReverse = 0;

    for (int i = 0; i < m; i++)
    {
        int b;
        cin >> b;

        totalForward += toBeEvaluatedArray[b] + 1;
        totalReverse += n - toBeEvaluatedArray[b];
    }

    cout << totalForward << " " << totalReverse << endl;

    return 0;
}
