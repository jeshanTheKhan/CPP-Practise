#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter First Sequences : ";
    cin >> s1;
    cout << "Enter Second Sequences : ";
    cin >> s2;

    int m = s1.size();
    int n = s2.size();

    int array[n + 1][m + 1];
    char track[n + 1][m + 1];

    for (int i = 0; i <= n; i++)
    {
        array[0][i] = 0;
    }
    for (int i = 1; i <= m; i++)
    {
        array[i][0] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (s1[i - 1] == s2[j - 1])
            {
                array[i][j] = array[i - 1][j - 1] + 1;
                track[i][j] = 'D';
            }
            else
            {
                if (array[i - 1][j] >= array[i][j - 1])
                {
                    array[i][j] = array[i - 1][j];
                    track[i][j] = 'U';
                }
                else
                {
                    array[i][j] = array[i][j - 1];
                    track[i][j] = 'L';
                }
            }
        }
    }

    cout << "The length is the lcs is: " << array[n][m] << endl;

    int i = n, j = m;
    vector<char> s;
    while (i > 0 && j > 0)
    {
        if (track[i][j] == 'D')
        {
            s.push_back(s1[i - 1]);
            i--;
            j--;
        }
        else if (track[i][j] == 'U')
        {
            i--;
        }
        else
        {
            j--;
        }
        
    }
    reverse(s.begin(), s.end());
        for (int i = 0; i < s.size(); i++)
            cout << s[i] << endl;
    return 0;
}