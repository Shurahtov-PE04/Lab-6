#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    for (size_t i = 0; i < arr.size(); ++i) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < arr.size(); ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    std::vector<int> testArray = { 64, 25, 12, 22, 11 };
    std::cout << "�������� ������: ";
    for (int num : testArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    selectionSort(testArray);

    std::cout << "��������������� ������: ";
    for (int num : testArray) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
