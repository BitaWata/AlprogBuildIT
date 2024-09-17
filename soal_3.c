#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int prima = 1;
    
    scanf("%d", &n);
    
    if (n <= 1) {
        prima = 0;
    } else {
        
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                prima = 0;
                break;
            }
        }
    }
    
    if (prima) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}