#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cout << "Enter the principal amount: ";
    cin >> principal;
    cout << "Enter the interest rate: ";
    cin >> rate;
    cout << "Enter the time period: ";
    cin >> time;
    double simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest = " << simpleInterest << endl;
    return 0;
}
