#include <stdio.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main(){

    //เก็บค่า sadine
    int sadine;
    printf("How many sadine : ");
    scanf("%d",&sadine);
    // printf("How many sadine :");
    // scanf("%d",&sadine);

    //เก็บค่า tomato
    int tomato;
    printf("How many tomato : ");
    scanf("%d",&tomato);
    // printf("How many tomato :");
    // scanf("%d",&tomato);

    int sadine_per_can;
    printf("Input sadine per can : ");
    scanf("%d",&sadine_per_can);

    int tomato_per_can;
    printf("Input tomato per can : ");
    scanf("%d",&tomato_per_can);

    //คำนวณต่อกระป๋อง
    int can_sadine = sadine / sadine_per_can;
    int can_tomato = tomato / tomato_per_can;

    //หาค่าต่ำสุดที่ผลิตได้
    int total_cans = min(can_sadine, can_tomato);
    printf("\n--- Production Summary ---\n");
    printf("Total cans produced: %d\n", total_cans);

    int sadine_left = sadine - sadine_per_can*total_cans;
    int tomato_left = tomato - tomato_per_can*total_cans;

    printf("sadine left %d ea\n", sadine_left);
    printf("tomato left %d ea\n", tomato_left);
    printf("\n");
    
    return 0;
}




/*
    1. ปลากระป๋องยี่ห้อหนึ่งใช้ปลาซูาร์ดีนสามตัวและมะเขือเทศสองผลเพื่อผลิตปลากระป๋องหนึ่งกระป๋อง หากโรงงาน
 ผลิตมีปลาซูาร์ดีนอยู่ 300 ตัวและมะเขือเทศอยู่ 200 ผล โรงงานจะผลิตปลากระป๋องได้ทั้งหมดกี่กระป๋อง 
 
    7. ปลากระป๋องยี่ห้อหนึ่งใช้ปลาซูาร์ดีนสามตัวและมะเขือเทศสองผลเพื่อผลิตปลากระป๋องหนึ่งกระป๋อง หากโรงงาน
 ผลิตมีปลาซูาร์ดีนอยู่ 300 ตัวและมะเขือเทศอยู่ 200 ผล โรงงานจะผลิตปลากระป๋องได้ทั้งหมดกี่กระป๋อง และจะมี
 วัตถุดิบแต่ละอย่างคงเหลือเท่าใดบ้าง
 
    13. ปลากระป๋องยี่ห้อหนึ่งใช้ปลาซูาร์ดีนสามตัวและมะเขือเทศสองผลเพื่อผลิตปลากระป๋องหนึ่งกระป๋อง หากโรงงาน
 ผลิตมีปลาซูาร์ดีนอยู่ X ตัวและมะเขือเทศอยู่ 200 ผล โรงงานจะผลิตปลากระป๋องได้ทั้งหมดกี่กระป๋อง
 
    20. ปลากระป๋องยี่ห้อหนึ่งใช้ปลาซูาร์ดีน M ตัวและมะเขือเทศ N ผลเพื่อผลิตปลากระป๋องหนึ่งกระป๋อง หากโรงงาน
 ผลิตมีปลาซูาร์ดีนอยู่ X ตัวและมะเขือเทศอยู่ Y ผล โรงงานจะผลิตปลากระป๋องได้ทั้งหมดกี่กระป๋อง และจะมีวัตถุดิบ
 แต่ละอย่างคงเหลือเท่าใดบ้าง
 */