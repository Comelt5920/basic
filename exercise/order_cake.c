#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int cake_order;
    do {
        scanf("%d", &cake_order);
    } while (cake_order <= 0 || cake_order > 100);

    int* a = (int*) malloc(cake_order * sizeof(int));
    int* b = (int*) malloc(cake_order * sizeof(int));

    for (int i = 0; i < cake_order; i++) {
        scanf("%d %d", &a[i], &b[i]);
    }

    float total_cake = 0;
    for (int i = 0; i < cake_order; i++) {
        total_cake = total_cake + (float)a[i] / b[i]; // คำนวณส่วนของเค้ก (เช่น 3/4 = 0.75)
    }

    int count = (int)total_cake; // ตัดทศนิยมก่อน
    if (total_cake > count) {    // ถ้ามีส่วนทศนิยมเหลือ
        count += 1;             // เพิ่ม 1 เพื่อให้ครอบคลุม
    }
    printf("%d", count);
    return 0;
}