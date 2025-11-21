
#include <iostream>
using namespace std;

// ����� ��� ���������� �������
void insertionSort(int array[], int n) {
    // �������� �� ���� ��������� �������, ������� �� �������
    for (int i = 1; i < n; i++) {
        int key = array[i]; // ������� �������, ������� ����� ��������
        int j = i - 1; // ������ ����������� ��������

        // ���������� �������� array[0..i-1], ������� ������ key
        // �� ���� ������� ������
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key; // ��������� key �� ���������� �����
    }
}

// ����� ��� ������ �������
void printArray(int array[], int n) {
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

// �������� ������� ��� ������������
int main() {
    int array[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(array) / sizeof(array[0]);

    cout << "�������� ������:" << endl;
    printArray(array, n);

    insertionSort(array, n);

    cout << "��������������� ������:" << endl;
    printArray(array, n);

    return 0;
}
