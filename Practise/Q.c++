#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;

    for (int i = 0; i < n.length();)
    {

        if (n[i] == '1' && i + 2 < n.length() && n[i + 1] == '4' && n[i + 2] == '4')
        {
            i = i + 3;
        }

        else if (n[i] == '1' && i + 1 < n.length() && n[i + 1] == '4')
        {
            i = i + 2;
        }

        else if (n[i] == '1')
        {
            i = i + 1;
        }

        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;

    return 0;
}
