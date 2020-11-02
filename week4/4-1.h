#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<time.h>
void err_exit(char *s){
    printf("USEG: *s is failed!\n");
    exit(1);
}
