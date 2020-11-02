#include"../ch.h"
int *p,x;
int main(){
    int *q;
    p=&x;
    *q=(int*)malloc(sizeof(int));
    printf("*p=%d, *q=%d", *p, *q);
    return 0;
}