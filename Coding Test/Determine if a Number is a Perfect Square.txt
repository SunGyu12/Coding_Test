#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    double root = sqrt(n);
    if(root - (int)root == 0)
    {
        return answer = 1;
    }
    else
        return answer = 2;
}