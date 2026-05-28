int main(){
    float a, b, c;
    printf("a=");
    scanf("%f", &a);
    printf("b=");
	scanf("%f", &b);
	printf("c=");
	scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh vo so nghiem");
            } else {
                printf("Phuong trinh vo nghiem");
            }
        } else {
            float x = -c / b;
            printf(" x = %.2f\n", x);
        }
    } 
    else {
        float delta = b * b - 4 * a * c;

        if (delta > 0) {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } 
        else if (delta == 0) {
            float x = -b / (2 * a);
            printf("x = %.2f\n", x);
        } 
        else {
            printf("Phuong trinh vo nghiem");
        }
    }
}




