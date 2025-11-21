#include <iostream>
#include <vector>
using namespace std;

// ����� ��� ��������� �������
int partition(vector<int>& array, int low, int high) {
    // �������� ��������� ������� � �������� ��������
    int pivot = array[high];
    int i = low - 1; // ������ �������� ��������

    for (int j = low; j < high; j++) {
        // ���� ������� ������� ������ ��� ����� ��������
        if (array[j] <= pivot) {
            i++;

            // �������� ������� array[i] � array[j]
            swap(array[i], array[j]);
        }
    }

    // �������� ������� array[i+1] � array[high] (������� �������)
    swap(array[i + 1], array[high]);

    return i + 1;
}

// ����� ��� ���������� �������
void quickSort(vector<int>& array, int low, int high) {
    if (low < high) {
        // pi - ��� ������ ���������, array[pi] ��������� �� ����� �����
        int pi = partition(array, low, high);

        // ������������� �������� �� � ����� ���������
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

// ��������������� ����� ��� ������ �������
void printArray(const vector<int>& array) {
    for (int value : array) {
        cout << value << " ";
    }
    cout << endl;
}

// �������� ������� ��� ������� ����������
int main() {
    vector<int> array = { 10, 7, 8, 9, 1, 5 };

    cout << "�������� ������:" << endl;
    printArray(array);

    quickSort(array, 0, array.size() - 1);

    cout << "\n��������������� ������:" << endl;
    printArray(array);

    return 0;
}
