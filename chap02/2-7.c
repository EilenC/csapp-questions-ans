//
// Created by Eilen on 2024/6/10.
//

# include <stdio.h>
# include "strings.h"

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len){
    size_t i;
    for ( i = 0; i < len; i++)
    {
        printf(" %.2x",start[i]);
    }
    printf("\n");
}

int main() {
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));
    return 0;
}