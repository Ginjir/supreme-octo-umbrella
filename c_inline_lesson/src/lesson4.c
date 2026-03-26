/* Last Updated: 2026/03/07
 * Name: lesson4.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/07
 * Purpose: インラインアセンブリ基礎学習
 * Notes: 
 * Version: v1.0
 */

#include <stdio.h>

int main()
{
    int a = 7;
    int b = 0;

    asm("mov %1, %0"
        : "=r"(b)
        :"r"(a));

    printf("%d\n", b);
    
    return 0;
}

