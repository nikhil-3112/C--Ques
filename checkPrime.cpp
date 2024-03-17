#include<iostream>
using namespace std;

bool isPrime(long num) {
    if (num <= 1) 
        return false;

    for (long i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return false; 
    }

    return true; 
}

int main() {
    long num;
    cout << "Enter a number: ";
    cin >> num;

    bool result = isPrime(num);
    if (result) {
        cout << "The given Number is Prime";
    } else {
        cout << "The given Number is not Prime";
    }

    return 0;
}

