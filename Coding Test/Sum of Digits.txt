#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = 0;
    while(true)
    {
        num = n % 10;
        answer += num;
        n/=10;
        if(n == 0)
        {
            break;
        }
    }
    return answer;
}