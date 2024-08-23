#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int additional_walks = 0;
    for (int i = 0; i < n - 1; ++i) {
        int total_walks = a[i] + a[i + 1];
        if (total_walks < k) {
            additional_walks += (k - total_walks);
            a[i + 1] += (k - total_walks);
        }
    }

    cout << additional_walks << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
