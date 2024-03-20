#include<iostream>
using namespace std;

long long pow(long long n, long long exp) {
    if (n == 0)
        return 0;

    if (exp == 0)
        return 1;

    if (n == 1)
        return 1;

    long long ans = 1;

    for (int i = 1; i <= exp; i++) {
        ans *= n;
    }

    return ans;
}

int main() {
    long long n, exp;
    cout << "Enter Number: ";
    cin >> n;

    cout << "Enter Exponent: ";
    cin >> exp;

    long long ans = pow(n, exp);
    cout << "The Power of " << n << " is " << ans << endl;

    return 0;
}

