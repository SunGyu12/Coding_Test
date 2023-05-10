#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) 
{
    int answer = 0;
    for (int i = 1; i < 100; i++)
    {
        int index = 0;
        index = i * 6;
        if (index %n == 0)
        {
            answer = i;
            return answer;
        }
    }
}