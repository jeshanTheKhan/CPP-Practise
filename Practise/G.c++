#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    for (int m = 1; m <= 1000; ++m) {
        if (!isPrime(n * m + 1)) {
           cout << m << endl;
            break;
        }
    }

    return 0;
}
