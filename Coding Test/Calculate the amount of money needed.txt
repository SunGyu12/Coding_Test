#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int price, int money, int count) {
    long long answer = 0;
    int sum =0;
    for (int i = 1; i < count+1; i++)
    {
        answer += (i * price);

    }
    if(answer == money)
    {
        answer = 0;
        return answer;
    }
    else if (answer < money)
        return answer = 0;
    else
    {
        return answer = answer - money;
    }
}