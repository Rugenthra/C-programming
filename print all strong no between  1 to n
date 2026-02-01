#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    for(int j = 1; j <= n; j++) {
        int temp = j; 
        int sum = 0;   // Reset sum for EVERY new number
        int fact = 1;

        while(temp > 0) {
            int rem = temp % 10; 
            
            fact = 1;
            for(int i = 1; i <= rem; i++) {
                fact *= i;
            }
            sum += fact;
            temp /= 10; 
        }

        if(sum == j) {
            printf("%d ", j);
        }
    }

    return 0;
}
