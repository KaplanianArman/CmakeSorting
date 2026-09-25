#include "MergeSort.h"
#include "Merge.h"

void MergeSort(int* beg, int* end) {
    if (beg + 1 >= end) return;
    int sz = end - beg;//количество элементов в текущем массиве
    int mid = sz / 2;
    int* mid_ptr = beg + mid;
    MergeSort(beg, mid_ptr);
    MergeSort(mid_ptr, end);
    Merge(beg, mid_ptr, mid_ptr, end, sz);
}