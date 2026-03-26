/* 2026/03/04
 * Name: hello_write
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/03
 * Purpose: write関数でHello World実装
 * Notes: printfや文字リテラルを使わない「世界一めんどくさいHello World」の実験
 * Version: v1.0
 */

#include <unistd.h>

int main(){
    char h = 72;
    char e = 69;
    char l = 76;
    char o = 79;
    char sp = 32;
    char w = 87;
    char r = 82;
    char d = 68;
    write(1, &h, 1);
    write(1, &e, 1);
    write(1, &l, 1);
    write(1, &l, 1);
    write(1, &o, 1);
    write(1, &sp, 1);
    write(1, &w, 1);
    write(1, &o, 1);
    write(1, &r, 1);
    write(1, &l, 1);
    write(1, &d, 1);
    return 0;
}
