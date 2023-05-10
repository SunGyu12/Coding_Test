#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(const char* my_string, const char* letter) {
    char* answer = (char*)malloc(sizeof(char)* (strlen(my_string)+1));
    int answer_idx = 0;
    for(int i = 0; i < strlen(my_string); i++)
    {
        if(my_string[i] != *letter)
        {
            answer[answer_idx] = my_string[i];
            answer_idx++;
        }
    }
    answer[answer_idx] = '\0';
    return answer;
}