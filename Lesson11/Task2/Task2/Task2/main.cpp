#include <iostream>
#include <vector>

// ������� ��� ���������� ��������� ������
int binary_search_greater(const std::vector<int>& arr, int x) {
    int left = 0;
    int right = arr.size();

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= x) {
            left = mid + 1;
        }
        else {
            right = mid;
        }
    }

    return left;
}

// ������� ��� �������� ���������, ������� ��� x
int count_elements_greater_than(const std::vector<int>& arr, int x) {
    int index = binary_search_greater(arr, x);
    return arr.size() - index;
}

int main() {
    setlocale(LC_ALL, "RU");
    std::vector<int> arr = { 14, 16, 19, 32, 32, 32, 56, 69, 72 };
    int point_of_reference;

    std::cout << "������� ����� �������: ";
    std::cin >> point_of_reference;

    int count = count_elements_greater_than(arr, point_of_reference);
    std::cout << "���������� ��������� � ������� �������, ��� " << point_of_reference << ": " << count << std::endl;

    return 0;
}