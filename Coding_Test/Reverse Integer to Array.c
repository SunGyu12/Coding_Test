#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int answer[10];

int* solution(long long n) {
    int sum = 0;
    while (n > 0) {
        answer[sum]= n % 10;
        n /= 10;
        sum++;
    }
    return answer;
}
