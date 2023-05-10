#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price) {
    int answer = 0;
    if(price < 100000)
        return answer = price;
    else if(price < 300000)
        return answer = price * 0.95;
    else if (price < 500000)
        return answer = price * 0.9;
    else 
        return answer = price * 0.8;
}