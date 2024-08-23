#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int clicks = 0;

    while (n != m) {
        if (m > n && m % 2 == 0) {
            m /= 2;
        } else {
            m += 1;
        }
        clicks++;
    }

    std::cout << clicks << std::endl;

    return 0;
}
