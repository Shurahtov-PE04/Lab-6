
#include <iostream>
#include <vector>
using namespace std;
// ������� ��� ��������� ����� ���������
int fibonacci(int n) {
	if (n <= 1)
		return n;
	vector<int> fib(n + 2);
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= n; i++)
		fib[i] = fib[i - 1] + fib[i - 2];
	return fib[n];
}
int fibonacciSearch(const vector<int>& arr, int x) {
	int n = arr.size();

	int fib_m2 = 0; 
	int fib_m1 = 1; 
	int fib_m = fib_m2 + fib_m1;

	while (fib_m < n) {
		fib_m2 = fib_m1;
		fib_m1 = fib_m;
		fib_m = fib_m2 + fib_m1;
	}

	int offset = -1;

	while (fib_m > 1) {
		int i = min(offset + fib_m2, n - 1);

		if (arr[i] < x) {
			fib_m = fib_m1;
			fib_m1 = fib_m2;
			fib_m2 = fib_m - fib_m1;
			offset = i;
		}
		else if (arr[i] > x) {
			fib_m = fib_m2;
			fib_m1 = fib_m1 - fib_m2;
			fib_m2 = fib_m - fib_m1;
		}
		else
			return i;
	}

	if (fib_m1 && offset + 1 < n && arr[offset + 1] == x)
		return offset + 1;

	return -1; 
}
int main() {
	vector<int> arr = { 10, 22, 35, 40, 45, 50, 80, 82, 85, 90, 100 };
	int x = 85;

	int result = fibonacciSearch(arr, x);

	if (result != -1)
		cout << "������� ������ �� ������� : " << result << endl;
	else
		cout << "������� �� ������" << endl;

	return 0;
}
