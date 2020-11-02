#include"ch.h"
void dynamic_lib_call(void){
    printf("dynamic_lib_call is called!\n");
}
void dsum(int x){
    int s=0;
    int i;
    for( i=0; i<x;i++){
        s=s+i;
    }
    printf("s=%d\n", s);
}
