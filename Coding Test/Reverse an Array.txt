#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    int* answer = (int*)malloc(sizeof(int)*num_list_len);
    int num = 0;
    for(int i = num_list_len - 1; i >= 0; i--)
    {
        answer[num] = num_list[i];
        num++;
    }
    return answer;
}