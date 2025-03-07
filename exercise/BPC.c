#include <stdio.h>

int main() {
    char text[50]; // ตัวแปรเก็บสตริงที่ผู้ใช้ป้อน (สูงสุด 49 ตัวอักษร + \0)
    int round = 0; // นับวงเล็บกลม ( และ )
    int square = 0; // นับวงเล็บเหลี่ยม [ และ ]
    int curly = 0; // นับวงเล็บปีกกา { และ }
    int all_good = 1; // 1 = ถูกต้อง, 0 = ผิด (ใช้เช็คลำดับ)

    // ขอให้ผู้ใช้ป้อนสตริง
    printf("Enter some brackets (like (a+b) or [x]): ");
    fgets(text, 50, stdin); // อ่านทั้งบรรทัด รวมช่องว่าง

    // ใช้ for loop ตรวจสอบทีละตัวอักษร
    for (int i = 0; text[i] != '\0' && text[i] != '\n'; i++) {
        char c = text[i]; // ตัวอักษรปัจจุบัน

        // ถ้าเจอวงเล็บเปิด ให้เพิ่มตัวนับ
        if (c == '(') {
            round = round + 1;
        }
        if (c == '[') {
            square = square + 1;
        }
        if (c == '{') {
            curly = curly + 1;
        }

        // ถ้าเจอวงเล็บปิด ให้ลดตัวนับ และเช็คว่าติดลบหรือเปล่า
        if (c == ')') {
            round = round - 1;
            if (round < 0) { // ถ้าปิดก่อนเปิด = ผิด
                all_good = 0;
            }
        }
        if (c == ']') {
            square = square - 1;
            if (square < 0) { // ถ้าปิดก่อนเปิด = ผิด
                all_good = 0;
            }
        }
        if (c == '}') {
            curly = curly - 1;
            if (curly < 0) { // ถ้าปิดก่อนเปิด = ผิด
                all_good = 0;
            }
        }
    }

    // ตรวจผลลัพธ์
    if (all_good == 1 && round == 0 && square == 0 && curly == 0) {
        printf("Balance\n"); // ทุกอย่างสมดุลและลำดับถูกต้อง
    } else {
        printf("Not Balance\n"); // มีอะไรผิด เช่น ลำดับไม่ถูก หรือจำนวนไม่เท่ากัน
    }

    return 0;
}