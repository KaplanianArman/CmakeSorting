#include "Merge.h"

void Merge(int* beg1, int* end1, int* beg2, int* end2, int total) {
    int cur_mas[total];
    int* start = beg1;//сохраняем указатель на начало
    int* pos = cur_mas;//позиция во вспомогательном массиве

    while (beg1 < end1 && beg2 < end2) {//пока живы оба массива
        if (*beg1 <= *beg2) {
            *pos = *beg1;
            beg1++;
        }
        else {
            *pos = *beg2;
            beg2++;
        }
        pos++;
    }

    while (beg1 < end1) {//если первый непуст
        *pos = *beg1;
        beg1++;
        pos++;
    }
        while (beg2 < end2) {//если правый не пуст
        *pos = *beg2;
        beg2++;
        pos++;
    }

    for (int i = 0; i < total; ++i) {//переписываем все в исходный массив
        *(start + i) = cur_mas[i];
    }
}