#include <stdio.h>
#include <string.h>

// ฟังก์ชัน Brute Force String Matching
void bruteForceStringMatch(char* text, char* pattern) {
    int n = strlen(text);
    int m = strlen(pattern);
    int count = 0;
    
    // วนลูปผ่านทุกตำแหน่งที่เป็นไปได้ในข้อความ
    for (int i = 0; i <= n - m; i++) {
        int j;
        
        // เปรียบเทียบ pattern กับส่วนหนึ่งของข้อความ
        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;  // ถ้าไม่ตรงกัน ให้หยุดการเปรียบเทียบแล้วเลื่อนไปตำแหน่งถัดไป
            }
        }
        
        // ถ้า j เท่ากับความยาวของ pattern แสดงว่าพบ pattern ทั้งหมด
        if (j == m) {
            printf("Pattern found at %d\n", i);
            count++;
        }
    }
    
    if (count == 0) {
        printf("No Pattern\n");
    } else {
        printf("Found pattern %d times\n", count);
    }
}

int main() {
    char text[1000];
    char pattern[100];
    
    printf("Text: ");
    scanf("%[^\n]", text);
    
    getchar();  // อ่านตัวอักษร newline ที่เหลือจาก scanf
    
    printf("Pattern: ");
    scanf("%[^\n]", pattern);
    
    bruteForceStringMatch(text, pattern);
    
    return 0;
}