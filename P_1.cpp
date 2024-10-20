#include <bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fi first
#define se second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, k, He, iTh;
        cin >> n >> m >> k >> He;
        int array[n], result = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        for (int i = 0; i < n; i++)
        {
            iTh = abs(array[i] - He);
            if (iTh % k == 0 && iTh != 0 && iTh / k < m)
            {
                result++;
            }
        }
        cout << result << endl;
    }
    return 0;
}