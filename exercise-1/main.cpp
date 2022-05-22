#include <iostream>

using namespace std;

double calc_PI() {
    double x = 0.5;
    double multi = 1.0;
    double res = 0;
    for(int i = 1; i < 100; i += 2){
        res += x * multi / i;
        multi *= i;
        multi /= (1 + i);
        x *= 0.25;
    }
    return res * 6;
}

int main() {
    cout << calc_PI();
    return 0;
}