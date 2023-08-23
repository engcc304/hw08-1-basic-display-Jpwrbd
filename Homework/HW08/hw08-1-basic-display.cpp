/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)
    
    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/
#include <stdio.h>
int main() {
    int n, i;
    float s = 0;
    printf("Test case:\n\t");       
    printf("Enter value n :\n\t\t");
    scanf("%d", &n);
    int numbers[n];
    for (i = 0; i < n; i++) {
        printf("\tEnter number %d :\n\t\t", i + 1);
        scanf("%d", &numbers[i]);
        s += numbers[i];
    }
    float average = s / n;
    printf("\tOutput:\n");
    printf("\tSum = %.0f\n", s);
    printf("\tAvg = %.2f\n", average);
    return 0;
}
