#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int array1[n], array2[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array1[i];
            array2[i] = array1[i];
        }
        sort(array1, array1 + n);

        bool result = true;

        for (int j = 0; j < n; j++)
        {
            if (array1[j] % 2 != array2[j] % 2)
            {
                result = false;
                break;
            }
        }

        if (result)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}