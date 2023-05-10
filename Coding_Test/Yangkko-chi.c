#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int z = 0;
    int i = 12000;
    int j = 2000;
    if(n>=10)
        z = n / 10;
        
        
        
    answer = (i*n)+(k*j)-(j*z);
    
    
    
    return answer;
}