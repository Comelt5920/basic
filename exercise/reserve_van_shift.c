#include <stdio.h>
#include <stdlib.h>

#define MAX_ORDERS 100  // จำกัดจำนวนคำสั่งจองสูงสุด

int main() {
    int order;

    // รับจำนวนคำสั่งจอง (ต้องมากกว่า 0)
    do {
        printf("Enter number of reservations: ");
        scanf("%d", &order);
    } while (order < 1 || order > MAX_ORDERS);


    int *days = (int *)malloc(order * sizeof(int));  

    // รับจำนวนวันที่ต้องการจองรถ (1-15 วัน)
    for (int i = 0; i < order; i++) {
        do {
            printf("Enter reservation duration for order %d (1-15): ", i + 1);
            scanf("%d", &days[i]);
        } while (days[i] < 1 || days[i] > 15);
    }

    // กำหนดวันที่รถแต่ละคันจะว่าง (เริ่มต้นเป็น 0 แปลว่าว่าง)
    int last_day_A = 0, last_day_B = 0, last_day_C = 0;

    // ประมวลผลคำสั่งจอง
    printf("\nReservation Results:\n");
    for (int i = 0; i < order; i++) {
        int min_day = last_day_A;
        char selected_van = 'A';
        int start_day = 0;

        if (last_day_B < min_day) {
            min_day = last_day_B;
            selected_van = 'B';
        }
        if (last_day_C < min_day) {
            min_day = last_day_C;
            selected_van = 'C';
        }
        
        if (selected_van == 'A') {
            start_day = last_day_A;
            last_day_A += days[i];
            printf("Order %d: Van %c, Start Day: %d, End Day: %d\n", i + 1, selected_van, start_day, last_day_A);
        } else if (selected_van == 'B') {
            start_day = last_day_B;
            last_day_B += days[i];
            printf("Order %d: Van %c, Start Day: %d, End Day: %d\n", i + 1, selected_van, start_day, last_day_B);
        } else {
            start_day = last_day_C;
            last_day_C += days[i];
            printf("Order %d: Van %c, Start Day: %d, End Day: %d\n", i + 1, selected_van, start_day, last_day_C);
        }
    }

    free(days);  // คืนหน่วยความจำที่จองไว้
    return 0;
}
