/* Дан целочисленный массив размера N. Найти максимальное количество
одинаковых его элементов. */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int i, j, N, arr[10] = {1, 2, 8, 1, 5, 8, 7, 8, 0, 0};

    printf("Массив: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    int element, max_element = 1; // кол-во одинаковых элементов и макс. кол-во одинаковых элементов