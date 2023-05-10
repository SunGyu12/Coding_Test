#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len, int num1, int num2) {
    // 부분 배열의 길이 계산
    int subarray_len = num2 - num1 + 1;
    
    // 동적 메모리 할당
    int* subarray = (int*)malloc(subarray_len * sizeof(int));
    
    // 부분 배열 추출
    for (int i = num1; i <= num2; i++) {
        subarray[i - num1] = numbers[i];
    }
    
    return subarray;
}
