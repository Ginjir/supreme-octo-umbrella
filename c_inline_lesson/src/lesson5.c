/* Last Updated: 2026/03/07
 * Name: lesson5.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/07
 * Purpose: インラインasm基礎学習
 * Notes: +rの学習
 * Version: v1.0
 */

#include <stdio.h>

int main()
{
    int x = 5;

    asm("inc %0"
        : "+r"(x)
    );

    printf("%d\n", x);

    return 0;
}

// "+r" は read/write operand
// %0 は operand index
// inc %0 → inc x に展開される
