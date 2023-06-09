#include <stdio.h>

void main() {
    int t = 0;

    printf("秒を時、分、秒に変換します。\n");

    printf("秒数を入力：");
    scanf_s("%d", &t);

    // 時・分・秒に展開
    int hour = t / 3600;        // 秒から時間に変換
    int min = (t % 3600) / 60;  // 秒から分に変換
    int sec = (t % 3600) % 60;  // 秒から秒に変換
    
    printf("%d 秒 -> %d 時間 %02d 分 %02d 秒\n", t, hour, min, sec);
};
