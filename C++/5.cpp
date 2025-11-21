#include <iostream>
#include <vector>
// ������� ��� ���������� �����
void shellSort(std::vector<int>& arr) {
	int n = arr.size();

	// �������� � �������� ���������� � ��������� ���
	for (int gap = n / 2; gap > 0; gap /= 2) {
		// �������� �� ���� ��������� � ������� �����������
		for (int i = gap; i < n; i++) {
			// ��������� ������� �������
			int temp = arr[i];
			int j;

			// �������� ��������, ������� ������ temp, ������
			for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
				arr[j] = arr[j - gap];
			}

			// ��������� temp �� ���������� �����
			arr[j] = temp;
		}
	}
}
// ������� ��� ������ �������
void printArray(const std::vector<int>& arr) {
	for (int num : arr) {
		std::cout << num << " ";
	}
	std::cout << std::endl;
}
int main() {
	// ������ �������������
	std::vector<int> arr = { 12, 34, 54, 2, 3 };

	std::cout << "�������� ������ : ";
	printArray(arr);

	shellSort(arr);

	std::cout << "��������������� ������ : ";
	printArray(arr);

	return 0;
}
