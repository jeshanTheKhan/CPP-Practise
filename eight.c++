#include <bits/stdc++.h>

using namespace std;

int calculatePoints(int points, int time) {
    return max(3 * points / 10, points - points / 250 * time);
}

int main() {
    int a, b, c, d;
    while(cin >> a >> b >> c >> d){

    int mishaPoints = calculatePoints(a, c);
    int vasyaPoints = calculatePoints(b, d);

    if (mishaPoints > vasyaPoints) {
        cout << "Misha";
    } else if (mishaPoints < vasyaPoints) {
        cout << "Vasya";
    } else {
        cout << "Tie";
    }

    cout << endl;
    }

    return 0;
}
