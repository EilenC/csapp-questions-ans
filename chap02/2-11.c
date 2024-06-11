//
// Created by Eilen on 2024/6/12.
//
# include <stdio.h>

void inplace_swap(int *x, int *y){
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

void reverse_array(int a[], int cnt) {
    int first,last;
    for (first = 0,last = cnt - 1;first < last; first++,last--) {
        printf("first:%d --> last:%d\n",first,last);
        inplace_swap(&a[first],&a[last]);
    }
}

void echoArray(int a[],int length) {
    int loop;
    for(loop = 0; loop < length; loop++)
        printf("%d ", a[loop]);
}

int main() {
    int a[] = {1,2,3,4,5};
    printf("reverse before: a[]=");
    echoArray(a,5);
    printf("\n");
    reverse_array(a,5);
    printf("\n");
    printf("reverse after: a[]=");
    echoArray(a,5);
}