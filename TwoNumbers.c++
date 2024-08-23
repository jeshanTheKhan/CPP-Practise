#include <bits/stdc++.h>
using namespace std;
int main() {
    double A, B;
    cin >> A >> B;

    double floorResult = floor(A / B);
    double ceilResult = ceil(A / B);
    double roundResult = round(A / B);

    cout << "floor " << A << " / " << B << " = " << floorResult << endl;
    cout << "ceil " << A << " / " << B << " = " << ceilResult << endl;
    cout << "round " << A << " / " << B << " = " << roundResult << endl;

    return 0;
}
