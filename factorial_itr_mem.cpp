#include <iostream>
using namespace std;

long int result[1000] = {0};
long int factorial(int n) {
   if (n >= 0) {
      result[0] = 1;
      for (int i = 1; i <= n; ++i) {
         result[i] = i * result[i - 1];
      }
      return result[n];
   }
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