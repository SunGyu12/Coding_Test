#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int i = 45;
    int answer = 0;
    int k = 0;
        for(int j = 0; j<numbers_len; j++)
            k += numbers[j];
            answer = i - k;
                
    return answer;
}