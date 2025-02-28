#include <stdio.h>
#include <stdbool.h>
int main(){

    //อัตราค่าบริการ
    int fee_per_hour = 15;
    printf("Rate THB/Hour : ");
    scanf("%d",&fee_per_hour);

    //มีสมาชิก = 1
    
    
    
    char subs;
    printf("You have member? (Y/N)");
    scanf("&c",&subs);

    int subs_cost;
    printf("Member cost : ");
    scanf("%d",&subs_cost);

    int percent_service;
    printf("\nRate %d THB/Hour\n", fee_per_hour);
    do {
        printf("Input %% reduce (1-99): ");
        scanf("%d", &percent_service);

        // ตรวจสอบว่าค่าที่รับเข้ามาอยู่นอกช่วงที่ถูกต้อง
        if (percent_service <= 0 || percent_service >= 100) {
            printf("Invalid input! Please enter a value between 1 and 99.\n");
        }
    } while (percent_service <= 0 || percent_service >= 100);

    //ชั่วโมงที่เล่น
    int hour;
    printf("Input hour you played : ");
    scanf("%d", &hour);
    //จำนวนวัน
    int day = 30;
    
    
    
    //คำนวณค่าบริการ ต่อ 1 ครั้ง
    int service_fee = 0;
    int member_service_fee = 0;
    member_service_fee = fee_per_hour * hour * percent_service/100;
    service_fee = fee_per_hour * hour;

    printf("\nMember cost : %d THB", member_service_fee);
    printf("\nNot a member cost : %d THB", service_fee);


    if (subs == 'y' || subs == 'Y')
    {
        printf("\nYou're Member");
    }else
        printf("\nYou're not Member");
    
    printf("\n\nYou use internet for %d hour. ", hour);

    printf("\nCost per month =  %d + %d = %d THB",service_fee*day, subs_cost, (service_fee*day)+subs_cost);
    return 0;
}




/*
    1. ร้านอินเตอร์เน็ตคาเฟเร้านหนึ่งคิดค่าใช้บริการ 15 บาทต่อชั่วโมง จงคำนวณค่าใช้จ่ายของลูกค้าที่ใช้บริการเป็นเวลา
 50 ชั่วโมง

    5. ร้านอินเตอร์เน็ตคาเฟเร้านหนึ่งคิดค่าใช้บริการ 15 บาทต่อชั่วโมง ทางร้านต้องการดึงดูดลูกค้าที่ใช้อินเตอร์เน็ตหรือ
 เล่นเกมส์มาก จึงมีระบบสมาชิกร้านซูึ่งผู้สมัครสมาชิกจะเสียค่าสมาชิก 100 บาทต่อเดือนและจะได้ส่วนลด 10% จาก
 ค่าบริการ โดยเฉลี่ยแล้วเด็กชายต้นจะไปใช้บริการที่ร้านอินเตอร์เน็ตทุกวัน วันละสองชั่วโมง สมมติให้แต่ละเดือนมี 30
 วัน จงหาว่าเด็กชายต้นควรจะสมัครสมาชิกร้านอินเตอร์เน็ตนี้หรือไม่ 

    7. ร้านอินเตอร์เน็ตคาเฟเร้านหนึ่งคิดค่าใช้บริการ 15 บาทต่อชั่วโมง ทางร้านต้องการดึงดูดลูกค้าที่ใช้อินเตอร์เน็ตหรือ
 เล่นเกมส์มาก จึงมีระบบสมาชิกร้านซูึ่งผู้สมัครสมาชิกจะเสียค่าสมาชิก 100 บาทต่อเดือนและจะได้ส่วนลด X% จาก
 ค่าบริการ โดยที่ X มีค่ามากกว่า 0 และ ไม่เกิน 100  จงคำานวณค่าใช้จ่ายทั้งหมดของผู้ที่เป็นสมาชิก และของผู้ที่ไม่
 เป็นสมาชิกเมื่อมีการใช้บริการ Y ชั่วโมงต่อเดือน (คำาตอบต้องอยู่ในรูปของค่า X และ Y)
*/