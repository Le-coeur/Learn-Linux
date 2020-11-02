#include"ch.h"
int main(){
    int i;
    char buf[256];
    //setbuf(stdout,buf);
    setvbuf(stdout, buf, _IOFBF,0);
    for(i=0;i<253;++i){
        printf(" ");
    }
    printf("ssss");
    while(1);
    return 0;
}