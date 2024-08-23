#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int commonFactor = gcd(N, M);
        int result = (N * M) / (commonFactor * commonFactor);

        cout << result << endl;
    }

    return 0;
}
