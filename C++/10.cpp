#include <iostream>
using namespace std;

int interpolationSearch(int arr[], int lo, int hi, int x) {
    if (lo <= hi && x >= arr[lo] && x <= arr[hi]) {
        int pos = lo + (((hi - lo) * (x - arr[lo])) / (arr[hi] - arr[lo]));

        if (arr[pos] == x) {
            return pos;
        }

        if (arr[pos] < x) {
            return interpolationSearch(arr, pos + 1, hi, x);
        }

        if (arr[pos] > x) {
            return interpolationSearch(arr, lo, pos - 1, x);
        }
    }
    return -1;  
}

int main() {
    int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21, 22, 23, 24, 33, 35, 42, 47 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 18;

    int result = interpolationSearch(arr, 0, n - 1, x);

    if (result != -1) {
        cout << "������� ������ �� �������: " << result << endl;
    }
    else {
        cout << "������� �� ������" << endl;
    }

    return 0;
}
