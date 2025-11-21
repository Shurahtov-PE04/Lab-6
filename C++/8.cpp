#include <iostream>
using namespace std;
// ������� ��������� ������
int linearSearch(int arr[], int size, int target) {
	// �������� �� ���� ��������� �������
	for (int i = 0; i < size; i++) {
		// ���� ����� ������� �������
		if (arr[i] == target) {
			return i; // ���������� ������ ���������� ��������
		}
	}
	return -1; // ���������� -1, ���� ������� �� ������
}
int main() {
	// ������� ������
	int array[] = { 3, 5, 2, 7, 9, 1, 4 };
	int size = sizeof(array) / sizeof(array[0]); // ��������� ������ �������

	int target = 7; // ������� ��������

	// �������� ������� ������
	int result = linearSearch(array, size, target);

	// ������� ���������
	if (result != -1) {
		cout << "������� ������ �� ������� : " << result << endl;
	}
	else {
		cout << "������� �� ������" << endl;
	}

	return 0;
}
