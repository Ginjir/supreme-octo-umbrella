/* Last Updated: 2026/03/06
 * Name: lesson3.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/06
 * Purpose: インラインアセンブリ基礎学習
 * Notes: 
 * Version: v1.0
 */

#include <stdio.h>

int main() {
    int a = 5;

    asm("add $3, %0"    // %0に3を加算
        : "+r"(a)       // 入力兼出力。aの値を読み込み、計算結果を書き戻す
        :               // 入力はなし
    );

    printf("a = %d\n", a);
    return 0;
}

/*
 * asm          インラインアセンブリ開始
 * "add $3, %0" CPU命令。%0 に即値 3 を加算
 * "+r"(a)      入力兼出力。a をレジスタに読み込み、書き戻す
 * %0           オペランドリストの0番目。ここでは a に対応
 * $3           即値リテラル（数値そのもの）
 * :            オペランドリストの区切り。出力と入力を分ける
 * 空欄         入力オペランドは無し
 */
