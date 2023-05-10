#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    for(int i = left; i <= right; i++)
    {
        int divisor_count = 0;
        for(int k = 2 ; k <= i; k++)
        {
            if(i % k == 0)
            {
                divisor_count++;
            }
        }
        if(divisor_count % 2 == 0)
        {
            answer -= i;
        }
        else
        {
            answer += i;
        }
    }
    return answer;
}
