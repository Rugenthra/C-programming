#include <stdio.h>

int main() {
    int n, cnt;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        cnt = 0;
        
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                cnt++;
                break;
            }
        }
        
        if (cnt == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
