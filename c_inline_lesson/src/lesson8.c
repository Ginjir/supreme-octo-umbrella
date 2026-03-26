/* Last Updated: 2026/03/11
 * Name: lesson8.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/11
 * Purpose: ifをインラインasmで作る
 * Notes: 
 * Version: v1.0
 */

#include <stdio.h>

int main() {
    int x = 5;
    int y = 3;
    int result = 0;

    asm(
        "cmp %2, %1\n"
            // %1 - %2の減算。cmp = compare (比較する)
        "jle 1f\n"
            // jle = jump/less/equal
            // → jump if less or equal (もし <= ならジャンプ)
            // 1f = 前方の1ラベル。f = forward
        "mov $1, %0\n"
            // 即値１($1)を%0(result)にコピー
        "1:\n"
            // ジャンプ先ラベル
        : "=r"(result)
        : "r"(x), "r"(y)
        );

    printf("result = %d\n", result);

    return 0;
}

/*
■ asm部分をCコードにすると

if (x > y)
    result = 1;

■ 全体のフロー
1 cmp y, x
   ↓
2 CPUフラグ更新
   ↓
3 jle
   ↓
4 条件成立ならジャンプ
   ↓
5 条件不成立なら mov

■ CPUのモデル
比較
↓
フラグ
↓
条件ジャンプ

人間はifで思考するがCPUはcmp → flag → jumpで思考する。
*/
