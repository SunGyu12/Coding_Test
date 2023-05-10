#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int solution(int num_list[], size_t num_list_len) {
    int answer = 0;
    int sum = 0;
    int div = 0;
    for (int i = 0; i < num_list_len; i++)
    {
        sum += num_list[i];
        if (div == 0)
        {
            div += num_list[i];
        }
        else
            div = div * num_list[i];
    }
    sum *=sum;
    if(sum > div)
    {
        answer = 1;
    }
    else 
        answer = 0;
    
    return answer;
}