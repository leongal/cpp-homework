#include <iostream>

using namespace std;

double recurision_calc(int t, int i, double amount) {
    if(t <= 0) return amount;
    return recurision_calc(t - 1, i, amount * (1 + i / 100.0));
}

double non_recurision_calc(int t, int i) {
    int k;
    double amount = 1.0;
    for(k = 0; k < t; k++)
        amount = amount * (1 + i / 100.0);
    return amount;
}

int main()
{
    int t, i;
    cin >> t >> i;
    
    cout << recurision_calc(t, i, 1.0) << endl;
    cout << non_recurision_calc(t, i);
    return 0;
}