#include <stdio.h>

/*
 * Zeroth argument: number of test cases (t)
 * Arguments 1 through n: Upper bound for the range of integers
 * within which we would like to find the number of multiples of 
 * three and five
 */ 

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        
        long long int count_div_3 = (n-1) / 3;
        long long int  count_div_5 = (n-1) / 5;
        long long int count_div_15 = (n-1) / 15;
        
        long long int mul_3 = 3 * count_div_3 * (count_div_3 + 1) / 2;
        long long int mul_5 = 5 * count_div_5 * (count_div_5 + 1) / 2;
        long long int mul_15 = 15 * count_div_15 * (count_div_15 + 1) / 2;
        
        
        long long int sum = mul_3 + mul_5 - mul_15;
        printf("%lld\n", sum);
    }
    return 0;
}
