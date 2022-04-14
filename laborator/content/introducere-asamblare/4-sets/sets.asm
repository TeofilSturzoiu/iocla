%include "printf32.asm"

section .text
    global main
    extern printf

main:
    ;cele doua multimi se gasesc in eax si ebx
    mov eax, 139
    mov ebx, 169
    PRINTF32 `%u\n\x0`, eax ; afiseaza prima multime
    PRINTF32 `%u\n\x0`, ebx ; afiseaza cea de-a doua multime

    ; TODO1: reuniunea a doua multimi
    mov edx, eax
    or edx, ebx
    PRINTF32 `Reuniunea este: \x0`
    PRINTF32 `%u\n\x0`, edx


    ; TODO2: adaugarea unui element in multime
    or eax, 291
    PRINTF32 `Noua multime este: \x0`
    PRINTF32 `%u\n\x0`, eax

    ; TODO3: intersectia a doua multimi
    mov edx, eax
    and edx, ebx
    PRINTF32 `Intersectia este: \x0`
    PRINTF32 `%u\n\x0`, edx


    ; TODO4: complementul unei multimi
    not eax
    PRINTF32 `Complementul unei multimi este: \x0`
    PRINTF32 `%u\n\x0`, eax

    ; TODO5: eliminarea unui element
    mov eax, 21     ; Am facut multimea "21" pentru ca stiu din cerinta ca 4 este in ea.
    xor eax, 4
    PRINTF32 `Multimea fara elementul eliminat: \x0`
    PRINTF32 `%u\n\x0`, eax

    ; TODO6: diferenta de multimi EAX-EBX
    mov edx, eax
    xor edx, ebx
    and edx, eax    ; In edx am stocat diferenta dintre eax si ebx. Cred (eax xor ebx) and eax ne spune diferenta dintre eax si ebx
    PRINTF32 `Diferenta dintre multimi: \x0`
    PRINTF32 `%u\n\x0`, edx

    xor eax, eax
    ret
