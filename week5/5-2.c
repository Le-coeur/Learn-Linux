#include"ch.h"
int main(){
    int fd;
    FILE *fp;
    char*s="hello world\n";
    if((fd=open("./1.txt",O_CREAT | O_WRONLY, 0644))==-1){
        err_exit("Error to create file\n");
    }
    if((fp=fopen("./2.txt", "w+"))==NULL){
        err_exit("Error to create file\n");
    }
    sleep(15);
    write(fd,s,strlen(s));
    fwrite(s,sizeof(char),strlen(s), fp);
    printf("After write\n");
    sleep(5);
    fclose(fp);
    sleep(10);
    close(fd);
    return 0;
}