/* Last Updated: 2026/03/06
 * Name: lesson6.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/06
 * Purpose: インラインasm基礎学習
 * Notes: 
 * Version: v1.0
 */

#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;

    asm("add %1, %0"
        : "+r"(x)
        : "r"(y)
    );

    printf("x = %d\n", x);
}
