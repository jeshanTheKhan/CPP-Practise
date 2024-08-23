#include <bits/stdc++.h>

using namespace std;

struct Item
{
    string name;
    int price, weight;
};
int main()
{
    int n, cap;
    cout << "Enter number of Item Number : ";
    cin >> n;
    cout << "Enter Capacity : ";
    cin >> cap;
    Item a[n];
    int array[n + 1][cap + 1];
    cout << "Enter the Entire list:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].name >> a[i].weight >> a[i].price;
    }
    for (int i = 0; i <= n; i++)
    {
        array[i][0] = 0;
    }
    for (int i = 1; i <= cap; i++)
    {
        array[0][i] = 0;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= cap; j++)
        {
            if (j >= a[i - 1].weight)
            {
                array[i][j] = max(array[i - 1][j], (array[i - 1][j - a[i - 1].weight] + a[i - 1].price));
            }
            else
            {
                array[i][j] = array[i - 1][j];
            }
        }
    }

    cout << array[n][cap] << endl;

    int val = array[n][cap];
    int i = n, j = cap;

    cout << "Selected items: " << endl;

    while (i > 0 && val > 0)
    {
        if (val == array[i - 1][j])
        {
            i--;
            continue;
        }
        else
        {
            cout << a[i - 1].name << endl;
            val -= a[i - 1].price;
            j -= a[i - 1].weight;
        }
        i--;
    }

    return 0;
}