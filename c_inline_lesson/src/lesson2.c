/* Last Updated: 2026/03/06
 * Name: lesson2.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/06
 * Purpose: インラインアセンブリ基礎学習
 * Notes: 
 * Version: v1.0
 */

#include <stdio.h>

int main() {
    int a = 7;
    int b = 0;

    asm("mov %1, %0"
        : "=r"(b)   // 出力オペラント 
        : "r"(a));  // 入力オペラント
    
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
