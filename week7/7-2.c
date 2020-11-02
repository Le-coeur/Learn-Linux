#include"ch.h"
int main(int argc,char *argv[]){
    if(argc<3){
        printf("errr\n");
        return 0;
    }
    int a=atoi(argv[1]);
    int b=atoi(argv[2]);
    printf("result:%d\n", a+b);
    for(int i=0;i<argc;++i){
        printf("%d, %s\n", i,argv[i]);
    }
    return 0;
}