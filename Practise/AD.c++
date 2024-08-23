#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int value= (-1 + sqrt(1 + 8 * (long long)N)) / 2;
        cout << value<< endl;
    }

    return 0;
}
