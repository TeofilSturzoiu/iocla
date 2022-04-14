%include "printf32.asm"

section .text
    global main
    extern printf

main:
    ;cele doua numere se gasesc in eax si ebx
    mov eax, 4
    mov ebx, 1
    ; TODO: aflati minimul
    cmp eax, ebx
    jg skip                       
    PRINTF32 `%d\n\x0`, eax ; afiseaza minimul

    skip:
        xchg eax, ebx
        PRINTF32 `%d\n\x0`, eax ; afiseaza minimul
    ret
