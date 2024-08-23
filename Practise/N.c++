#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> cards; // Store the cards along with their indices
    for (int i = 1; i <= n; ++i) {
        int value;
        cin >> value;
        cards.push_back({value, i});
    }

    sort(cards.begin(), cards.end()); // Sort the cards based on their values

   
    for (int i = 0; i < n / 2; ++i) {
        cout << cards[i].second << " " << cards[n - i - 1].second << endl;
    }

    return 0;
}
