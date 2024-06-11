//
// Created by Eilen on 2024/6/12.
//


# include <stdio.h>
# include "strings.h"

typedef unsigned char *byte_pointer;

void inplace_swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main() {
    int x = 1;
    int y = 2;
    printf("swap before: x=%d,y=%d",x,y);
    inplace_swap(&x,&y);
    printf("\n");
    printf("swap after: x=%d,y=%d",x,y);
}