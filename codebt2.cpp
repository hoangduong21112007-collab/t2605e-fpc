#include <stdio.h>

int main() {
    float tien_goc = 5000.0;
    float lai_suat = 0.08;
    int nam = 3;
    float tong_tien = tien_goc * (1 + lai_suat) * (1 + lai_suat) * (1 + lai_suat);

    printf("So tien nhan duoc sau %d nam la: %.2f $\n", nam, tong_tien);
}

