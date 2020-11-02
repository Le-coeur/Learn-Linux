#include"ch.h"
static void callback1(void){
    printf("1\n");
}
static void callback2(void){
    printf("2\n");
}
static void callback3(void){
    printf("3\n");
}
int main(){
    atexit(callback1);
    atexit(callback2);
    atexit(callback3);
    printf("main\n");
    return 0;
}