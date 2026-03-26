/* Last Updated: 2026/03/06
 * Name: lesson1.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/06
 * Purpose: インラインアセンブリの基礎学習
 * Notes: 「世界一めんどくさいHello World」の下準備
 * Version: v1.0
 */

#include <stdio.h>

int main() {
    int a = 42; // コピー元の変数
    int b;      // コピー先の変数
    
    // インラインアセンブリ
    // mov %1, %0
    // %1 = a (input), %0 = b (output)
    // レジスタにコピーしてbに書き戻す
    asm ("mov %1, %0"
        : "=r"(b)   // output operands
        : "r"(a));  // input operands

    printf("b = %d\n", b);
    return 0;
}
