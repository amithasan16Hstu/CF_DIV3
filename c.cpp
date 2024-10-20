#include <bits/stdc++.h>
#define optimize()
using namespace std;
int main()
{
    optimize();
    ios_base::sync_with_stdio(false);
    int t, n, search;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> search;
        int array[n];
        for (i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int count1 = 0, count2 = 0, count3 = 0, flag1 = 0, flag2 = 0, flag3 = 0;
        if (array[0] != array[n - 1])
        {
            for (int i = 0; i < n; i++)
            {
                if (array[i] == array[0])
                    count1++;
                if (count1 == search) 
                {
                    flag1 = 1;
                    break;
                }
            }
            for (int j = i+1; j < n; j++)
            {
                if (array[j] == array[n - 1])
                {
                    count2++;
                }
                if (count2 == search)
                {
                    flag2 = 1;
                    break;
                }
            }
            if (flag1 == 1 && flag2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (array[i] == array[0])
                    count3++;
                if (count3 == search)
                {
                    flag3 = 1;
                    break;
                }
            }
            if (flag3 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}