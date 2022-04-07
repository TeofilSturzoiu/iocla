%include "printf32.asm"

section .text
    global main
    extern printf

main:
    mov eax, 7       ; vrem sa aflam al N-lea numar; N = 7

    ; TODO: calculati al N-lea numar fibonacci (f(0) = 0, f(1) = 1)
    mov ebx, 1
    mov ecx, 1
    fibo:
        mov edx, ebx
        mov ebx, ecx
        add ecx, edx
        sub eax, 1
    loop:
        cmp eax, 1
        jne fibo

    PRINTF32 `%d\n\x0`, ebx ; afiseaza minimul

    ret
