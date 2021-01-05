#include <iostream>
using namespace std;

long int factorial(int n) {
    long int res = 1, i;
    for (i = 2; i <= n; i++)
        res *= i;
    return res;
}

int main() {
    int n;
    cin >> n;
    clock_t time_req;
    time_req = clock();
    long int fact = factorial(n);
    cout << "Factorial of " << n << " is " << fact << endl;
    cout << "Time Taken is : " << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;
    return 0;
}