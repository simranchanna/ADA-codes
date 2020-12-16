#include<iostream> 
#include<algorithm> 
#include<bits/stdc++.h>
using namespace std;
int mycompare(int a, int b) {
    return a > b;
}
void MakeCases(int * BestCase, int * WorstCase, int * AverageCase, int n) {
    for (int i = 0; i < n; ++i) {
        AverageCase[i] = rand() % n ;
        BestCase[i] = i;
        WorstCase[i] = n - i;
    }
}
void InsertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main(int argc, char const * argv[]) {
    int n = 10000;
    int * BestCase = new int[n];
    int * WorstCase = new int[n];
    int * AverageCase = new int[n];
    MakeCases(BestCase, WorstCase, AverageCase, n);
    cout<<"When n = "<<n<<endl;
    clock_t time_req;
    time_req = clock();
    InsertionSort(BestCase, n);
    cout << "Time Taken For Best case in insertion sort is:" << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;
    time_req = clock() - time_req;
    InsertionSort(WorstCase, n);
    cout << "Time Taken For Worst case in insertion sort is:" << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;
    time_req = clock() - time_req;
    InsertionSort(AverageCase, n);
    cout << "Time Taken For Average case in insertion sort is:" << (float) time_req / CLOCKS_PER_SEC << " seconds" << endl;
    cout << endl;
}