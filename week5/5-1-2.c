#include"ch.h"
int main(){
    int i;
    char buf[324];
    setbuf(stdout,buf);
    for(i=0;i<320;++i){
        printf(" ");
    }
    printf("ssss");
    while(1);
    return 0;
}