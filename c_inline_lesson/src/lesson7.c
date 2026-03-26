/* Last Updated: 2026/03/07
 * Name: lesson7.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/07
 * Purpose: インラインasm基礎学習
 * Notes: 内部の動きを可視化するコード
 * Version: v1.0
 */

#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;

    // 実際にCPUレジスタをシミュレーションする変数
    int reg0 = x;   // レジスタ0にxを割り当て
    int reg1 = y;   // レジスタ1にyを割り当て

    printf("=== 実行前 ===\n");
    printf("C: x = %d, y = %d\n", x, y);
    printf("REG SIM: reg0 = %d, reg1 = %d\n", reg0, reg1);

    // asmでxにyを加算
    asm(
        "add %1, %0\n"
        : "+r"(x)   // xのレジスタに加算結果を出力
        : "r"(y)    // yの値を入力
    );

    // シミュレーション用reg0にreg1を加算
    reg0 += reg1;

    printf("=== 実行後 ===\n");
    printf("C: x = %d (x に yを加算)\n", x);
    printf("C: y = %d (y は変化なし)\n", y);
    printf("REG SIM: reg0 = %d, reg1 = %d\n", reg0, reg1);

    return 0;
}
