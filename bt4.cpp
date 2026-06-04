#include <stdio.h>
int main() {
    int a, b;
    int x, y; 
    int ucln, bcnn;

    printf( "a=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);

    x = a;
    y = b;

    while (y != 0) {
        int so_du = x % y; 
        x = y;             
        y = so_du;        
    }
    
    ucln = x; 

    bcnn = (a * b) / ucln;
    printf("Uoc chung lon nhat la: %d\n", ucln);
    printf("Boi chung nho nhat la: %d\n", bcnn);

}


