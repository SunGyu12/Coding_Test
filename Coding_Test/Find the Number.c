#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int pos = 0;
    char num_str[12];
    sprintf(num_str, "%d", num);  // int형을 문자열로 변환
    for (int i = 0; num_str[i] != '\0'; i++) {
        if (num_str[i] == k + '0') {
            return i + 1;
        }
    }
    return -1;
}