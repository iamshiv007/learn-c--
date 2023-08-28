// Find Max num

#include <iostream>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int numbers[] = { 45, 67, 12, 89, 34 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int maxElement = findMax(numbers, size);
    std::cout << "The maximum element is: " << maxElement << std::endl;

    return 0;
}
