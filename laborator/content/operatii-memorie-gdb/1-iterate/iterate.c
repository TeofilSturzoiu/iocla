#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
    int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
    unsigned char *char_ptr = (char*) v;
    for (int i = 0; i < sizeof(v) / sizeof(unsigned char); i++) {
        printf("%p -> 0x%x\n", char_ptr, *char_ptr);
        char_ptr++;
    }

    printf("\n\n");
    
    short *char_ptr_short = (short*) v;
    for (int i = 0; i < sizeof(v) / sizeof(short); i++) {
        printf("%p -> 0x%x\n", char_ptr_short, *char_ptr_short);
        char_ptr_short++;
    }


    printf("\n\n");
    
    int *char_ptr_int = (int*) v;
    for (int i = 0; i < sizeof(v) / sizeof(int); i++) {
        printf("%p -> 0x%x\n", char_ptr_int, *char_ptr_int);
        char_ptr_int++;
    }

    /*for (int i = 0; i < sizeof(v) / sizeof(int); i++)
        printf("%d %p\n", v[i], &v[i]);*/
    return 0;
}
