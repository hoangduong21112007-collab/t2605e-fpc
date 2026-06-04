#include <stdio.h>
int main() {
    int n;
    int tong = 0; 

    printf(" n= ");
    scanf("%d", &n);

    while (n > 0) {
        tong = tong + (n % 10); 
        n = n / 10;             
    }

    printf("Tong cac chu so la: %d\n", tong);

}


