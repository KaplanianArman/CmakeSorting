#include <iostream>
#include "MergeSort.h"
#include "Merge.h"

int main() {
    int n; std::cin >> n;
    int mas[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> mas[i];
    }

    int* beg = mas;
    int* end = beg + n;
    MergeSort(beg, end);
    for (int i = 0; i < n; ++i) {
        std::cout << mas[i] << ' ';
    }
    std::cout << '\n';
    return 0;
}