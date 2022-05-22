#include <iostream>

using namespace std;

#include <iostream>

double calc_sumSquares(int n) {
    if (n == 0) return 0;
    return calc_sumSquares(n-1) + n*n;
}

int main() {
    int n;
    cin >> n;
    cout << calc_sumSquares(n);
    return 0;
}