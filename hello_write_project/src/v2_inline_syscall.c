/* 2026/03/05
 * Name: v2_inline_syscall.c
 * Author: Ginjiro Mizusawa
 * Created: 2026/03/05
 * Purpose: インラインアセンブリでHello World実装
 * Notes: printfや文字リテラルを使わない「世界一めんどくさいHello World」の実験
 * Version: v1.0
 */

int main(){
    
    char msg[] = {72,69,76,76,79,32,87,79,72,76,68};

    long ret;

    asm volatile (
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "mov %1, %%rsi\n"
        "mov $11, %%rdx\n"
        "syscall\n"
        "mov %%rax, %0\n"
        : "=r"(ret)
        : "r"(msg)
        : "rax","rdi","rsi","rdx"
    );

    return 0;
}
